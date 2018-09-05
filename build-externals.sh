#!/bin/sh

osname=$(uname)

rm -rf distribution/lib/pkgconfig
rm externals/cryptopp/*.o

install_prefix=$HOME/git-innoaus/rainpass-services/distribution

cd externals

cd PHP-CPP
make clean && make && make install INSTALL_PREFIX=$install_prefix
cd ..

# build libsodium
cd libsodium
./autogen.sh
#if [ $osname == 'Linux' ]
#then
    ./configure CFLAGS='-fPIC' --disable-pie --prefix=$install_prefix
#else
#    ./configure --prefix=$install_prefix
#fi
make && make install

cd ..

cd sodiumpp && rm -rf build && mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$install_prefix -DSODIUMPP_STATIC=ON
make install
cd ../..

# build xxHash
cd xxHash/cmake_unofficial && rm -rf build && mkdir build && cd build
cmake .. -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=$install_prefix
make install

cd ../../..

# build yaml-cpp
cd yaml-cpp && rm -rf mybuild && mkdir mybuild && cd mybuild
cmake .. -DBUILD_SHARED_LIBS=OFF -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$install_prefix
make -j 2 install

cd ../..

# build cctz
cd cctz 
make clean
make install PREFIX=$install_prefix

cd ..

# build redis
tar xvf redis-4.0.8.tar
cd redis-4.0.8/src
make install PREFIX=$install_prefix

cd ../..

# build cpp_redis
cd cpp_redis && rm -rf build && mkdir build && cd build

cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$install_prefix
make -j 2 install

cd ../..

# build redis redex plugin
cd redex
make clean && make
cp src/*.so ../../distribution/bin
cp redismodule.h ../../distribution/include

cd ..

# build restbed
cd restbed && rm -rf build && mkdir build && cd build
cmake .. -DBUILD_TESTS=NO -DBUILD_EXAMPLES=NO -DBUILD_SHARED=NO -DBUILD_SSL=NO -DCMAKE_INSTALL_PREFIX=$install_prefix
make -j 2 install

cd ../..

# build cryptopp
cd cryptopp
make static shared cryptest.exe
make install PREFIX=$install_prefix

cd ../..
cd distribution/lib
ln -sf ../library/librestbed.a ./librestbed.a

cd ..

