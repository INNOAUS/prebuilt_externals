#!/bin/sh

git clone https://github.com/libssh/libssh-mirror.git
mkdir -p libssh-mirror/build
cd libssh-mirror/build

cmake .. -DOPENSSL_ROOT_DIR=/usr -DBUILD_STATIC_LIB=ON -DWITH_EXAMPLES=ON -DCMAKE_INSTALL_PREFIX=../../../../raspberrypi/devtools

make 
make install

cp ./src/libssh.a ../../../../raspberrypi/devtools/lib


