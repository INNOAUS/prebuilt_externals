git clone --recursive https://github.com/CLIUtils/CLI11.git
cd CLI11
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
make -j 8
make install
