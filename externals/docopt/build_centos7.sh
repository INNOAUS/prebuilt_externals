git clone https://github.com/docopt/docopt.cpp.git
cd docopt.cpp
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$PWD/../../../../linux/devtools
make -j 8
make install
