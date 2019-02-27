git clone --recursive https://github.com/tcbrindle/NanoRange.git
cd NanoRange
mkdir mybuild && cd mybuild
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools
make -j 8
make install
