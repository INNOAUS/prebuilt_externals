git clone https://github.com/fmtlib/fmt.git
cd fmt
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
