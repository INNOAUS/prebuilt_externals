#!/bin/bash
export PATH=$HOME/git-innoaus/prebuilt_libs_$1/devtools/bdr/bin:$PATH
export PostgresSQL_ROOT=$HOME/git-innoaus/prebuilt_libs_$1/devtools/bdr

git clone -b 6.3 --recursive https://github.com/jtv/libpqxx.git
mkdir -p libpqxx/build
pushd libpqxx/build
cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
#./configure CXXFLAGS=-fPIC --prefix=$HOME/git-innoaus/prebuilt_externals/$1/devtools
make install
popd
