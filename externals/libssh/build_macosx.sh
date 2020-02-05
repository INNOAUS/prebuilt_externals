git clone https://github.com/libssh/libssh-mirror.git
mkdir -p libssh-mirror/build
pushd libssh-mirror/build

cmake .. -DOPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@1.1/1.1.1d -DBUILD_STATIC_LIB=ON -DWITH_EXAMPLES=ON -DCMAKE_INSTALL_PREFIX=../../../../macos/devtools

make -j8
make install

cp ./src/libssh.a ../../../../macos/devtools/lib

popd

