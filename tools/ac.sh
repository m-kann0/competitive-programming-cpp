#!/bin/sh

url=$1
directory=${url##*/}

if [ ! -d $directory ]; then
    mkdir $directory
    cd $directory
    oj d $url
    if type "clip.exe" > /dev/null 2>&1; then
        echo -n $directory | clip.exe
    else
        echo -n $directory | xsel --clipboard --input
    fi
fi
