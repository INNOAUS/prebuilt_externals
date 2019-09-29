git clone https://github.com/libexpat/libexpat.git
cd libexpat/expat
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$PWD/../../../../../$1/devtools -DEXPAT_SHARED_LIBS=OFF 
make -j8
make install
