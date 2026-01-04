FROM nixpkgs/nix:nixos-23.11

ENV PATH=/root/.nix-profile/bin:/usr/bin:/bin

RUN <<EOF
    set -euo pipefail
    nix-env -iA cachix -f https://cachix.org/api/v1/install
    cachix use moergo-glove80-zmk-dev
    mkdir /config
    # Mirror ZMK repository to make it easier to reference both branches and
    # tags without remote namespacing
    git clone --mirror https://github.com/moergo-sc/zmk /zmk
    GIT_DIR=/zmk git worktree add --detach /src
EOF

# Prepopulate the container's nix store with the build dependencies for the main
# branch and the most recent three tags
RUN <<EOF
    cd /src
    for tag in main $(git tag -l --sort=committerdate | tail -n 3); do
      git checkout -q --detach $tag
      nix-shell --run true -A zmk ./default.nix
    done
EOF

ARG CACHEBUST=1
COPY --chmod=755 <<EOF /bin/entrypoint.sh
#!/usr/bin/env bash
    set -euo pipefail
    : "\${BRANCH:=main}"

    echo "Build time is $CACHEBUST"
    echo "Checking out \$BRANCH from moergo-sc/zmk" >&2
    cd /src
    git fetch origin
    git checkout -q --detach "\$BRANCH"
    
    # NIX_EXPERIMENTAL="--extra-experimental-features nix-command"
    # nix shell "$NIX_EXPERIMENTAL" -f . west -c west init -l /config
    # cd /
    # nix shell "$NIX_EXPERIMENTAL" -f /src/default.nix west -c west update
    # nix shell "$NIX_EXPERIMENTAL" -f /src/default.nix update-manifest -c update-manifest > /src/nix/manifest.json 

    mkdir /build
    echo 'Building Glove80 firmware' >&2
    cd /config
    nix-build . --arg firmware 'import /src/default.nix {}' -j2 -o /build/combined --show-trace -K
    install -o "\$UID" -g "\$GID" /build/combined/glove80.uf2 /_build/`date +"%s"`.uf2
EOF

ENTRYPOINT ["/bin/entrypoint.sh"]

# Run build.sh to use this file
