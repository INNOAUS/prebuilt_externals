#!/bin/bash
./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_externals/linux/devtools
make -j8 install
