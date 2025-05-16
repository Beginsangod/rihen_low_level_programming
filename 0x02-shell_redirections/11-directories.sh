#!/bin/sh
echo "le nombre de repertoire est:$(find . -type d ! -name '.' ! -name '..' | wc -l)"
