git clone --recursive https://github.com/Corvusoft/restbed.git
cd restbed
mkdir build && cd build
cmake .. -DBUILD_SSL=YES -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOEM/git-innoaus/prebuilt_libs_$1/devtools
make -j2
make install
