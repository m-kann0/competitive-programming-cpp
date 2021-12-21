#!/bin/sh

if type "clip.exe" > /dev/null 2>&1; then
    cat $1 | clip.exe
else
    cat $1 | xsel --clipboard --input
fi