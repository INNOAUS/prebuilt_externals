git clone https://github.com/docopt/docopt.cpp.git
cd docopt.cpp
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
make -j 3
make install
