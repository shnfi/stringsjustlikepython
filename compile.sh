#!/bin/bash

debug_file=$(echo $1)

if [ -f debug/$debug_file ]; then
    gcc debug/$debug_file src/*
else
    echo "The called debug file does not existed!"
fi