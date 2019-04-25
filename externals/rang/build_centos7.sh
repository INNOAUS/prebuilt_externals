git clone https://github.com/agauniyal/rang.git
cd rang
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$PWD/../../../../linux/devtools
make -j 8
make install
