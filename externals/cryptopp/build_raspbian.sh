#!/bin/bash
git clone https://github.com/weidai11/cryptopp.git
pushd cryptopp
#export CXXFLAGS="-fPIC -DNDEBUG -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -g2 -O3 -std=c++11"
export CXXFLAGS="-fPIC -DNDEBUG -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -g2 -O3 -std=c++11"
make -j3 static 
make -j3 static install PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
popd

