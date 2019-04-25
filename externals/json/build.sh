git clone https://github.com/nlohmann/json.git
cd json
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$PWD/../../../../$1/devtools
make -j 8
make install
