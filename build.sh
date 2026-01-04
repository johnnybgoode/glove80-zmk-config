#!/bin/bash

set -euo pipefail

usage() {
  echo "Usage $0 [-i] [-b branch] [-h]" 
  exit 0
}

IMAGE=glove80-zmk-config-docker
BRANCH="main"  # "${1:-main}"
INTERACTIVE="n"
CONFDIR="${PWD}/config"
BUILDDIR="${PWD}/_build"

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
  docker run -it --rm -v "$CONFDIR:/config" -v "$BUILDDIR:/_build" -e UID="$(id -u)" -e GID="$(id -g)" -e BRANCH="$BRANCH" "$IMAGE" /bin/sh 
else
  docker run --rm -v "$CONFDIR:/config" -v "$BUILDDIR:/_build" -e UID="$(id -u)" -e GID="$(id -g)" -e BRANCH="$BRANCH" "$IMAGE"
fi

