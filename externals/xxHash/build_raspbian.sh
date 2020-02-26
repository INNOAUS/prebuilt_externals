#!/bin/sh

git clone https://github.com/Cyan4973/xxHash.git

mkdir -p xxHash/build
cd xxHash/build

cmake ../cmake_unofficial -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
cmake --build .
cmake --build . --target install
