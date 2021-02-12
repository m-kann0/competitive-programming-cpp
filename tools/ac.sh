#!/bin/sh

url=$1
directory=${url##*/}

if [ ! -d $directory ]; then
    mkdir $directory
    cd $directory
    oj d $url
    # echo -n $directory | clip.exe
    echo -n $directory | xsel --clipboard --input
fi
