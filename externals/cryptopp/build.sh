#!/bin/bash
git clone https://github.com/weidai11/cryptopp.git
cd cryptopp
export CXXFLAGS="-fPIC -DNDEBUG -g2 -O3 -std=c++11"
make -j8 static
make -j8 static install PREFIX=$HOME/git-innoaus/prebuilt_externals/$1/devtools

