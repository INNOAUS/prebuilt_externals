git clone https://github.com/agauniyal/rang.git
cd rang
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
