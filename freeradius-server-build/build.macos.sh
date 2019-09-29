#!/bin/bash

opensslrootdir=/usr/local/Cellar/openssl@1.1/1.1.1d
export PATH=$opensslrootdir/bin:$PATH
pushd freeradius-server-src
./configure --prefix=$PWD/../freeradius-server --with-openssl-lib-dir=$opensslrootdir/lib --with-openssl-include-dir=$opensslrootdir/include

make -j8
make install
popd

