git clone https://github.com/docopt/docopt.cpp.git
cd docopt.cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../centos7-gcc-7.3.1-5/devtools
make -j 8
make install
