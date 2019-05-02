git clone https://github.com/fmtlib/fmt.git
cd fmt
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools
make -j 8
make install
