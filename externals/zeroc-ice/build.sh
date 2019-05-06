git clone https://github.com/zeroc-ice/ice.git
export BZ2_HOME=$HOME/git-innoaus/prebuilt_externals/$1/devtools
export EXPAT_HOME=$BZ2_HOME
export MCPP_HOME=$BZ2_HOME
cd ice/cpp
make CONFIGS=cpp11-static -j2 CXXFLAGS="-std=c++11 -fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib -L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib64"
make install CONFIGS=cpp11-static -j2 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
make CONFIGS=cpp11-shared -j2 CXXFLAGS="-std=c++11 -fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib -L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib64"
make install CONFIGS=cpp11-shared -j2 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
make CONFIGS=static -j2 CXXFLAGS="-fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib -L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib64"
make install CONFIGS=static -j2 CXXFLAGS="-fPIC" prefix=$MCPP_HOME
make CONFIGS=cpp11-static -j2 CXXFLAGS="-std=c++11 -fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib -L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib64"
make install CONFIGS=shared -j2 CXXFLAGS="-fPIC" prefix=$MCPP_HOME
make CONFIGS=shared -j2 CXXFLAGS="-fPIC" LDFLAGS="-L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib -L$HOME/git-innoaus/prebuilt_externals/centos/devtools/lib64"
make install CONFIGS=shared -j2 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
