#!/bin/bash
path=$(echo $PATH) | $(tr ':' '\n')
find $path -mindepth 1 -type d | wc -l
echo $path
