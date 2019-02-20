git clone --recursive https://github.com/CLIUtils/CLI11.git
cd CLI11
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../centos7-gcc-7.3.1-5/devtools
make -j 8
make install
