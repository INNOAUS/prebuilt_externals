git clone https://github.com/docopt/docopt.cpp.git
cd docopt.cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/git-innoaus/prebuilt_externals/raspbian/devtools
make -j 8
make install
