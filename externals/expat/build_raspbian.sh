git clone https://github.com/libexpat/libexpat.git
cd libexpat/expat
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools -DBUILD_shared=OFF
make -j8
make install
