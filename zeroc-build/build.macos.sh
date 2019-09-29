#!/bin/bash

brew install lmdb mcpp
INSTALLDIR=$PWD/ice-release
DEVTOOLS=$HOME/git-innoaus/prebuilt_externals/macos/devtools
OPENSSL=/usr/local/Cellar/openssl@1.1/1.1.1d
pushd ice/cpp

make CONFIGS=all PLATFORMS=all MCPP_HOME=$DEVTOOLS BZ2_HOME=$DEVTOOLS prefix=$INSTALLDIR -j8 install
#make CONFIGS=shared PLATFORMS=all -j8
#make CONFIGS=static PLATFORMS=all -j8
#make CONFIGS=cpp11-shared PLATFORMS=all -j8
#make CONFIGS=cpp11-static PLATFORMS=all -j8

popd
