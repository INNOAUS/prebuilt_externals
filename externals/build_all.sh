#!/bin/bash

BUILD_ROOT=$PWD

#cd bzip2
#git clone https://github.com/zeroc-ice/bzip2
#cd bzip2
#make CFLAGS=-fPIC
#make install PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx

#cd $BUILD_ROOT

#cd json
#git clone https://github.com/nlohmann/json.git
#cd json
#mkdir build && cd build
#cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8
#make install

#cd $BUILD_ROOT

#export PATH=$PATH:$HOME/git-innoaus/prebuilt_libs_macosx/bdr/bin
#cd libpqxx/libpqxx-6.2.4
#./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_libs_macosx --disable-documentation
#make -j8 install

#cd $BUILD_ROOT

#cd libqrencode
#git clone --recursive https://github.com/fukuchi/libqrencode.git
#cd libqrencode
#mkdir build && cd build
#cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8 install

#cd $BUILD_ROOT

#cd libsodium
#git clone https://github.com/jedisct1/libsodium.git
#cd libsodium
#./autogen.sh
#./configure --prefix=$HOME/git-innoaus/prebuilt_libs_macosx CFLAGS=-fPIC
#make -j8 install

#cd $BUILD_ROOT

#cd mcpp
#git clone https://github.com/zeroc-ice/mcpp
#cd mcpp
#make CFLAGS=-fPIC
#make install PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx

#cd $BUILD_ROOT

#cd restbed
#git clone --recursive https://github.com/Corvusoft/restbed.git
#cd restbed
#mkdir build && cd build
#cmake .. -DBUILD_SSL=NO -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8
#make install

#cd $BUILD_ROOT

#cd libexpat 
#tar xvfz R_2_2_6.tar.gz
#cd libexpat-R_2_2_6/expat
#mkdir build && cd build
#cmake .. -DBUILD_shared=ON -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8
#make install
#cmake .. -DBUILD_shared=OFF -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_macosx
#make -j8
#make install

#cd $BUILD_ROOT

cd zeroc-ice
tar xvfz v3.7.2.tar.gz
export BZ2_HOME=$HOME/git-innoaus/prebuilt_libs_macosx
export EXPAT_HOME=$BZ2_HOME
export MCPP_HOME=$BZ2_HOME
cd ice-3.7.2/cpp
make CONFIGS=cpp11-static -j8 CXXFLAGS="-std=c++11 -fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_libs_macosx/lib"
make install CONFIGS=cpp11-static -j8 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
make CONFIGS=cpp11-shared -j8 CXXFLAGS="-std=c++11 -fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_libs_macosx/lib"
make install CONFIGS=cpp11-shared -j8 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
make CONFIGS=static -j8 CXXFLAGS="-fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_libs_macosx/lib"
make install CONFIGS=static -j8 CXXFLAGS="-fPIC" prefix=$MCPP_HOME
make CONFIGS=shared -j8 CXXFLAGS="-fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_libs_macosx/lib"
make install CONFIGS=shared -j8 CXXFLAGS="-fPIC" prefix=$MCPP_HOME

cd $BUILD_ROOT
