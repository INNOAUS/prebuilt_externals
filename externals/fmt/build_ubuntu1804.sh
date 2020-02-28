git clone https://github.com/fmtlib/fmt.git
cd fmt
mkdir build && cd build
cmake .. -DCMAKE_CXX_FLAGS=-fPIC -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_libs_$1/devtools
make 
make install
