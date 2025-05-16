#!/bin/sh
current_path=`pwd`
parent_path=`dirname $current_path`
cp -n $current_path/.html $parent_path
