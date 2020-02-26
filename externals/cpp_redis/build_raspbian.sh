git clone --recursive https://github.com/cpp-redis/cpp_redis.git
cd cpp_redis
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
make -j 3
make install
