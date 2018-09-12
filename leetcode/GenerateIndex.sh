#!/bin/bash

echo '| ID | Type | Question   |      Solutions      |'
echo '|:----:|:----------:|:-------------:|:------:|'

function trim {
    local trimmed="$1"

    # Strip leading space.
    trimmed="${trimmed## }"
    # Strip trailing space.
    trimmed="${trimmed%% }"

    echo "$trimmed"
}

count_sql=0
count_algorithms=0

function process {
  local id=`echo $1 | awk '{print substr($1, 0, length($1)-1);}'`
  if [[ -n $(find "$1" -maxdepth 1 -name \*.sql -print -quit) ]]; then
    local type=Database
    count_sql=$((count_sql+1))
  else
    local type=Algorithms
    count_algorithms=$((count_algorithms+1))
  fi
  local question=$(echo $1 | awk '{for (i=2; i<=NF; i++) printf ("%s ",$i);}' )
  question=$(trim "$question")
  local sc=$(ls -1q "$1"/ | wc -l)
  local solutions="[$sc](https://github.com/DoctorLai/ACM/tree/master/leetcode/$1)"
  local first=$(ls -1q "$1"/ | head -1)
  local leetcodeurl=$(cat "$1/$first" | grep leetcode | awk '{print $2}')
  local blog=$(cat "$1/$first" | grep helloacm | awk '{print $2}')
  blog=$(trim $blog)
  if [ ! -z $blog ]; then
    question="[$question]($blog)"
  fi   
  local leetcode=" N/A "
  if [ ! -z $leetcodeurl ]; then
    leetcode="[Leetcode]($leetcodeurl)"
  fi
  echo "| $id | $type | $question | $solutions | $leetcode |"
}


for i in *; do
  if [ -d "$i" ]; then
    process "$i"
  fi    
done

echo
echo Total \*$((count_sql+count_algorithms))\* Questions: \*$count_sql\* Database, \*$count_algorithms\* Algorithms