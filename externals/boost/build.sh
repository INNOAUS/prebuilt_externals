cd boost
./bootstrap.sh --prefix=$HOME/git-innoaus/prebuilt_libs_$1/devtools
./b2 --prefix=$HOME/git-innoaus/prebuilt_libs_$1/devtools link=static threading=multi variant=release runtime-link=static install
