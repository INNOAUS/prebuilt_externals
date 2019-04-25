git clone https://github.com/zeroc-ice/ice.git
export BZ2_HOME=$HOME/git-innoaus/prebuilt_externals/$1/devtools
export EXPAT_HOME=$BZ2_HOME
export MCPP_HOME=$BZ2_HOME
cd ice/cpp
make CONFIGS=cpp11-static -j8 CXXFLAGS="-std=c++11 -fPIC"
make install CONFIGS=cpp11-static -j8 CXXFLAGS="-std=c++11 -fPIC" prefix=$MCPP_HOME
