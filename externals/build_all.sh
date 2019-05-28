#!/bin/bash

BUILD_ROOT=$PWD

#cd bzip2
#git clone https://github.com/zeroc-ice/bzip2
#cd bzip2
#make CFLAGS=-fPIC
#make install PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx

#cd $BUILD_ROOT

#cd json
#git clone https://github.com/nlohmann/json.git
#cd json
#mkdir build && cd build
#cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8
#make install

#cd $BUILD_ROOT

#export PATH=$PATH:$HOME/git-innoaus/prebuilt_libs_macosx/bdr/bin
#cd libpqxx/libpqxx-6.2.4
#./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_libs_macosx --disable-documentation
#make -j8 install

#cd $BUILD_ROOT

#cd libqrencode
#git clone --recursive https://github.com/fukuchi/libqrencode.git
#cd libqrencode
#mkdir build && cd build
#cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8 install

#cd $BUILD_ROOT

#cd libsodium
#git clone https://github.com/jedisct1/libsodium.git
#cd libsodium
#./autogen.sh
#./configure --prefix=$HOME/git-innoaus/prebuilt_libs_macosx CFLAGS=-fPIC
#make -j8 install

#cd $BUILD_ROOT

#cd mcpp
#git clone https://github.com/zeroc-ice/mcpp
#cd mcpp
#make CFLAGS=-fPIC
#make install PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx

#cd $BUILD_ROOT

cd restbed
git clone --recursive https://github.com/Corvusoft/restbed.git
cd restbed
mkdir build && cd build
cmake .. -DBUILD_SSL=NO -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
make -j8
make install

cd $BUILD_ROOT
