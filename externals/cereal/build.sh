#!/bin/sh

git clone https://github.com/INNOAUS/cereal.git

mkdir -p cereal/build
cd cereal/build

cmake .. -DSKIP_PORTABILITY_TEST=YES -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools

cmake --build .
cmake --build . --target install
