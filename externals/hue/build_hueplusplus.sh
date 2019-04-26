git clone https://github.com/enwi/hueplusplus.git
cd hueplusplus
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/$1/devtools
make -j 8
make install
