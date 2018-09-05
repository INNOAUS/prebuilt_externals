#!/bin/sh

#
# CentOS
#
#sudo yum -y install net-tools yum-utils wget
#sudo yum -y install gcc-g++
#sudo yum -y install git
#sudo yum -y install libtool
#sudo yum -y install sqlite-devel openssl-devel postgresql-devel tcl-devel

cd libpqxx/libpqxx-6.2.4
./configure --prefix=$PWD/../../devtools --disable-documentation
make -j 2
make install
cd ../..


cd poco/poco-1.9.1
#./configure --prefix=$PWD/../../../devtools --omit=Data/MySQL,Data/ODBC
#make -j 2
#make install
cd build
cmake .. -DENABLE_CRYPTO=ON -DENABLE_DATA=ON -DENABLE_DATA_POSTGRESQL=OFF -DENABLE_TESTS=OFF -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=../../../../devtools
# macosx
#cmake .. -DENABLE_CRYPTO=ON -DENABLE_DATA=ON -DENABLE_DATA_POSTGRESQL=OFF -DENABLE_TESTS=OFF -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=../../../../devtools -DENABLE_NETSSL=OFF
cd ../../..


cd redis && cd redis-4.0.10
make
make test
make install PREFIX=$PWD/../../devtools
cd ../..


cd hiredis/hiredis-0.13.3
make
make install PREFIX=$PWD/../../devtools
cd ../..


cd xxHash/cmake_unofficial
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=../../../devtools -DBUILD_SHARED_LIBS=OFF -DBUILD_STATIC_LIBS=ON
make
make install
cd ../../..


cd yaml-cpp
mkdir build
cd build
cmake .. -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=../../devtools
make -j 2
make install
cd ../..


cd libsodium
./autogen.sh
./configure --prefix=$PWD/../devtools
make -j 2
make install
cd ..


cd cpp_redis
mkdir build
cd build
cmake .. -DBUILD_EXAMPLES=YES -DCMAKE_INSTALL_PREFIX=../../devtools
make -j 2
make install
cd ../..


