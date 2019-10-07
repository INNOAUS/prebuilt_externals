#!/bin/bash

pushd freeradius-server-src
./configure --prefix=$PWD/../freeradius-server --with-openssl-lib-dir=/usr/lib/x86_64-linux-gnu --with-openssl-include-dir=/usr/include/openssl

make -j7
make install
popd

