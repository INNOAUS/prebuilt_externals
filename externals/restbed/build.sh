git clone --recursive https://github.com/Corvusoft/restbed.git
cd restbed
mkdir build && cd build
cmake .. -DBUILD_SSL=YES -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$PWD/../../../../$1/devtools
make -j2
make install
