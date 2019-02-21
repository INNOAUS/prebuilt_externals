git clone https://github.com/Amanieu/asyncplusplus.git
cd asyncplusplus
mkdir build && cd build
#cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools -DBUILD_SHARED_LIBS=ON
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools -DBUILD_SHARED_LIBS=OFF
make -j 8
make install
