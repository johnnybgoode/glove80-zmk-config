#!/usr/bin/env bash

IMAGE=glove80-zmk-config-west
CONFDIR="${PWD}/config"
DRAWDIR="${PWD}/draw"

docker build -t "$IMAGE" -f Dockerfile.west .
docker run -it --rm -v "$CONFDIR:/config" -v "$DRAWDIR:/draw"  -e UID="$(id -u)" -e GID="$(id -g)" "$IMAGE" /bin/bash