#update : /home/leo/cmake-3.16.4-Linux-x86_64/share/cmake-3.16/Modules/FindPostgreSQL.cmake
#  if(UNIX)
#    list(APPEND PostgreSQL_LIBRARY_ADDITIONAL_SEARCH_SUFFIXES
#        "postgresql${suffix}"
#        "pgsql-${suffix}/lib")
#    list(APPEND PostgreSQL_INCLUDE_ADDITIONAL_SEARCH_SUFFIXES
#        "postgresql${suffix}"
#        "postgresql/${suffix}"
#        "pgsql-${suffix}/include")
#    list(APPEND PostgreSQL_TYPE_ADDITIONAL_SEARCH_SUFFIXES
#        "postgresql${suffix}/server"
#        "postgresql/${suffix}/server"
#        "pgsql-${suffix}/include/postgresql/server"
#        "pgsql-${suffix}/include/server")
#  endif()


#!/bin/bash
git clone --recursive https://github.com/jtv/libpqxx.git
mkdir -p libpqxx/build
pushd libpqxx/build
export PostgresSQL_ROOT=$HOME/2ndquadrant_bdr/pgsql-9.4
cmake .. -DCMAKE_INSTALL_PREFIX=$HOME/git-innoaus/prebuilt_externals/$1/devtools
make 
make install
popd
