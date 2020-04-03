#!/bin/sh

git clone https://github.com/INNOAUS/log4cpp.git

mkdir -p log4cpp/build
cd log4cpp/build

cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
cmake --build .
cmake --build . --target install
