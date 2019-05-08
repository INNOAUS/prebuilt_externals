#!/bin/bash
./configure CXXFLAGS=-fPIC --prefix=/git-innoaus/prebuilt_externals/raspbian/devtools
make -j2 install
