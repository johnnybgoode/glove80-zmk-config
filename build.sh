#!/bin/bash

set -euo pipefail

usage() {
  echo "Usage $0 [-i] [-b branch] [-h]" 
  exit 0
}

IMAGE=glove80-zmk-config-docker
BRANCH="main"  # "${1:-main}"
INTERACTIVE="n"

while getopts ":ib:h" opt; do
  case ${opt} in
    b)
      BRANCH=${OPTARG}
    ;;
    i)
      INTERACTIVE="y"
    ;;
    h)
      usage
    ;;
    :)
      echo "Option -${OPTARG} requires an argument." >&2
      usage
    ;;
    \?)
      echo "Unknown option -${OPTARG}" >&2
      usage
    ;;
  esac
done

mkdir -p _build
docker build -t "$IMAGE" --build-arg CACHEBUST=$(date +%s) .

if [ $INTERACTIVE == "y" ]; then
  docker run -i -t -v "$PWD:/config" -e UID="$(id -u)" -e GID="$(id -g)" --entrypoint /bin/sh -e BRANCH="$BRANCH" "$IMAGE"
else
  docker run -v "$PWD:/config" -e UID="$(id -u)" -e GID="$(id -g)" -e BRANCH="$BRANCH" "$IMAGE"
fi

