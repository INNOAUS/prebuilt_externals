git clone https://github.com/zeroc-ice/mcpp
cd mcpp
make CFLAGS=-fPIC
make install PREFIX=$HOME/git-innoaus/prebuilt_externals/$1/devtools
