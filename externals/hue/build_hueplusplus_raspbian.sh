git clone --recursive https://github.com/enwi/hueplusplus.git
cd hueplusplus
rm -rf build
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools
make -j 8
make install
