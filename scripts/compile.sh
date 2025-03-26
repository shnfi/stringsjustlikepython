#!/bin/bash

debug_file=$(echo $1)

if [ -f "test/$debug_file" ]; then
    gcc "test/$debug_file" src/*.c src/helper_func/*.c

else
    echo "The called debug file does not existed!"
fi
