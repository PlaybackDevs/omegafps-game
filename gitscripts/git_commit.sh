#!/bin/sh

echo "GitScript- commit"
if [ -z "$1" ];
then
echo "Please enter a commit message."
else
git commit -m $1
fi
