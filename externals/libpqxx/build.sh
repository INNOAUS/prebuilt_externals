#!/bin/bash
./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_externals/$1/devtools
make -j8 install
