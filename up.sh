#!/bin/bash

#==================================#
# > this should only be used when  #
#   making backups to repo         #
# > because of this, commits will  #
#   not have specifics             #
# > if you use this, make sure     #
#   you know what it does and are  #
#   running from a Unix system     #
#   ie) Linux, OSX, etc.           #
#       NOT WINDOWS                #
# =================================#

function gitEX () {
local EX="$?"
# checks escape seq and returns error
# message if esc seq is not 0
  if [ $EX != 0 ]; then
    echo ":: error"
  else
    echo ":: done"
  fi
}

# $HOME is an env var that holds your
# home dir.
# example, if I am user "ryan_u",
# then my home dir is
#   /home/ryan_u/
# PUT YOUR bpr REPO IN YOUR HOME DIR
# IF NOT, CHANGE THIS LINE
cd $HOME/bpr

# includes all files in current dir
# change this to suit your needs
files="*"

# verifies
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
