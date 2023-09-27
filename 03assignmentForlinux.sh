#!/bin/bash

#check exist input value
if [ $# -ne 2 ]; then
  echo "Invaild input"
  exit 1
fi

# input value
i=$1
j=$2

#check input value is not minus

if [ $i -lt 0 ]; then
  echo "input must be greater than 0"
  exit 1
fi

# multiplication table form 1 to i
for n in $(seq 1 $i)
do
  for m in $(seq 1 $j)
  do
	  printf "%d*%d=%-4d" $n $m $((n * m))
  done
  echo
done


