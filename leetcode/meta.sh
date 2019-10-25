#!/bin/bash

function trim {
  local trimmed="$1"
  # Strip leading space.
  trimmed="${trimmed## }"
  # Strip trailing space.
  trimmed="${trimmed%% }"
  # Strip tailling spaces.
  trimmed=${trimmed%%[[:space:]]}
  echo "$trimmed"
}

x=""
for i in $(ls -1q "$1"); do
    meta=$(cat "$1/$i" | grep "^// " | grep -P "(EASY|MEDIUM|HARD)")
    x+=$(echo $meta | grep "^// " | grep -v "http" | cut -d, -f2-)
    x+=","
done
tags=$(echo $x | tr "," "\n" | awk '{print tolower($0)}' | awk '{$1=$1};1' | sort | uniq -i | sed "1d" | sed -z 's/\n/<BR>/g' )

echo $tags