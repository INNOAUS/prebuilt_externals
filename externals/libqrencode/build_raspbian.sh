# sudo yum -y install libpng-devel
git clone --recursive https://github.com/fukuchi/libqrencode.git
cd libqrencode
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools
make -j 8
make install
