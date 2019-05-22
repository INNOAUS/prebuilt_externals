#!/bin/bash

git clone https://github.com/jedisct1/libsodium.git

cd libsodium
./autogen.sh
./configure --prefix=$HOME/git-innoaus/prebuilt_externals/$1/devtools CFLAGS=-fPIC
