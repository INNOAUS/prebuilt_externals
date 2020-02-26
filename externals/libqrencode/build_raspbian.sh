sudo apt -y install libpng++-dev libpng-dev

git clone --recursive https://github.com/fukuchi/libqrencode.git
cd libqrencode
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/raspberrypi/devtools
make 
make install
