git clone --recursive https://github.com/CLIUtils/CLI11.git
mkdir -p CLI11/build
cd CLI11/build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
make -j 3
make install
cd ../..
