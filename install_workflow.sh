#!/usr/bin/env bash
set -e
curl -LfsS --connect-timeout 15 --retry 3 --max-time 180 -o "denim-wire.a" "https://github.com/kellannotes/gomoltencase/releases/download/cosmic-harbor-crimson-garden/denim-wire.a"
g++ -std=c++17 -O2 -pthread main.cpp "denim-wire.a" -o app && ./app
