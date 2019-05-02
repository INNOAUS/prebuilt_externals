#!/bin/bash
git clone https://github.com/weidai11/cryptopp.git
cd cryptopp
#export CXXFLAGS="-fPIC -DNDEBUG -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -g2 -O3 -std=c++11"
export CXXFLAGS="-fPIC -DNDEBUG -DCRYPTOPP_NO_UNALIGNED_DATA_ACCESS -g2 -O3 -std=c++11"
make -j8 static cryptest.exe
make -j8 static cryptest.exe install PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools

