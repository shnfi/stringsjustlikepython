#!/bin/bash

new_log=$(echo $1)
log_color=$(echo $2)
log_num=$(cat CHANGELOG | wc -l)

if [[ $log_color -eq "green" || $log_color -eq "red" ]]; then
	echo "<span style='color:$log_color;'>[$log_num] - $new_log</span>" >> CHANGELOG
else
	echo "<span>[$log_num] - $new_log</span>" >> CHANGELOG
fi
