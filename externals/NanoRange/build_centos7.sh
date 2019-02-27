git clone --recursive https://github.com/tcbrindle/NanoRange.git
cd NanoRange
mkdir mybuild && cd mybuild
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../centos7-gcc-7.3.1-5/devtools
make -j 8
make install
