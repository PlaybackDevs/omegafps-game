#!/bin/sh

echo "GitScript- push to remote"

if [ $1 = "-tags"];

then
git push --tags
else
git push

fi
