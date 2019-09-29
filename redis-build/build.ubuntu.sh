#!/bin/bash

sudo atp -y install tcl tcl-dev
export INSTALLDIR=$PWD
tar xvf redis-5.0.5.tar.gz
pushd redis-5.0.5
make -j8
make test
make install PREFIX=$INSTALLDIR/redis-server
cp redis.conf $INSTALLDIR/redis-server/bin
popd
