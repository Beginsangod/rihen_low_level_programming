#!/bin/sh
find . -type f -name "*.gif" | sed 's/.*\//g; s/.gif$//g' | sort -f
