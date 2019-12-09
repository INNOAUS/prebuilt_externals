#!/bin/bash

pushd freeradius-server-src
./configure --prefix=$PWD/../freeradius-server --with-openssl-lib-dir=/usr/lib64 --with-openssl-include-dir=/usr/include/openssl

make -j7
make install
popd

