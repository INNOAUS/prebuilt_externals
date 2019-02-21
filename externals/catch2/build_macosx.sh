git clone https://github.com/catchorg/Catch2.git
cd Catch2
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
