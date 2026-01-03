#!/usr/bin/env bash

IMAGE=glove80-zmk-config-west
BUILDIR="${PWD}/_build"
CONFDIR="${PWD}/config"
DRAWDIR="${PWD}/draw"

docker build -t "$IMAGE" -f Dockerfile.west .
docker run -it --rm -v "$CONFDIR:/config" -v "$DRAWDIR:/draw" -v "${BUILDIR}:/.build" -e UID="$(id -u)" -e GID="$(id -g)" "$IMAGE" /bin/bash