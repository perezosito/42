#!/bin/sh
find . -iname '*.sh' -exec basename -s .sh {} \;
