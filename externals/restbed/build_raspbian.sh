git clone --recursive https://github.com/Corvusoft/restbed.git
cd restbed
mkdir build && cd build
cmake .. -DBUILD_SSL=YES -DBUILD_TESTS=ON  -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
make 
make install
