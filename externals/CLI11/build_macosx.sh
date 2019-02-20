git clone --recursive https://github.com/CLIUtils/CLI11.git
cd CLI11
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
