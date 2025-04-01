#!/bin/bash

count=$(cat docs/methods_list.md | wc -l)
absolute_count=$(($count - 3))

echo $absolute_count
