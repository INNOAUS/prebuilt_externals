#!/bin/sh

git clone https://github.com/INNOAUS/machineid.git

mkdir -p machineid/build
cd machineid/build

if [ $1 == 'macosx' ]
    cmake .. -DCMAKE_CXX_FLAGS=-DDARWIN -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
then
    cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
fi

cmake --build .
cmake --build . --target install
