#!/bin/sh
echo (((echo $WATER | tr -cd '0-9')+(echo $STIR | tr -cd '0-9')))
