git clone https://github.com/docopt/docopt.cpp.git
cd docopt.cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
