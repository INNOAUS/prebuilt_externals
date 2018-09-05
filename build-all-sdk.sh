#!/bin/sh

rm -rf build
mkdir build && cd build && cmake .. -DBUILD_SDK=YES -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/rainpass-services/sdk-release
make -j 8 && make install

cd ..

cp -R sdk-release/lib/php sdk-release/php-sdk

osname=`uname`

if [[ "$osname" == 'Darwin' ]]; then
    cd mobile-sdk
    ./build.mobile.sh

    cp -R release ../sdk-release/mobile-sdk
fi

