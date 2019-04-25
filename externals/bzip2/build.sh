git clone https://github.com/zeroc-ice/bzip2
cd bzip2
make CFLAGS=-fPIC
make install PREFIX=$HOME/git-innoaus/prebuilt_externals/$1/devtools
