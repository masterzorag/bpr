#!/bin/bash

function gitEX () {
local EX="$?"

  if [ $EX != 0 ]; then
    echo ":: error"
  else
    echo ":: done"
  fi
}

cd $HOME/bpr

files="*"

echo -n "continue [y/n] "
read verify

if [ $verify -eq 'y' ]; then
  echo "commit message not specified, defaulting"
  git add `find .`
  git add $files 
  git commit -m "update `date`"
  git push origin master
  gitEX
else
  echo "cancel"
  return 0;
fi
