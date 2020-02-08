#!/bin/bash
git clone --recursive https://github.com/jtv/libpqxx.git
mkdir -p libpqxx/build
pushd libpqxx/build
./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_externals/$1/devtools
make install
popd
