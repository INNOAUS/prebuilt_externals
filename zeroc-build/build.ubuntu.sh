#!/bin/bash

INSTALLDIR=$PWD/ice-release
DEVTOOLS=$HOME/git-innoaus/prebuilt_externals/ubuntu/devtools

sudo apt -y install libbz2-dev liblmdb-dev liblmdb++-dev libexpat1-dev

pushd ice/cpp

export MCPP_HOME=$DEVTOOLS 
export BZ2_HOME=$DEVTOOLS
export EXPAT_HOME=$DEVTOOLS
make CONFIGS=all PLATFORMS=all prefix=$INSTALLDIR -j8 install
#make CONFIGS=shared PLATFORMS=all -j8
#make CONFIGS=static PLATFORMS=all -j8
#make CONFIGS=cpp11-shared PLATFORMS=all -j8
#make CONFIGS=cpp11-static PLATFORMS=all -j8

popd
