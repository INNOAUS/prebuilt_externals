git clone https://github.com/Amanieu/asyncplusplus.git
cd asyncplusplus
mkdir build && cd build
#cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../centos7-gcc-7.3.1-5/devtools -DBUILD_SHARED_LIBS=ON
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../centos7-gcc-7.3.1-5/devtools -DBUILD_SHARED_LIBS=OFF
make -j 8
make install
