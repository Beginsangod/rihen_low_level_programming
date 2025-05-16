#!/bin/sh
current_path= "$(pwd)"
if [ -d /tmp/u];then 
	cp $current_path/[A-Z]* /tmp/u
else
	echo "tmp/u not found"
fi
