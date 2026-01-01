#!/usr/bin/env bash

IMAGE=glove80-zmk-docker-west
CONFDIR="${PWD}/config"

docker build -t "$IMAGE" -f Dockerfile.west .
docker run -it --rm -v "$CONFDIR:/config" -e UID="$(id -u)" -e GID="$(id -g)" "$IMAGE" /bin/bash