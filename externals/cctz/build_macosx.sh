git clone https://github.com/google/cctz.git
cd cctz
mkdir mybuild && cd mybuild
cmake .. -DCMAKE_INSTALL_PREFIX=$PWD/../../../../macosx/devtools -DCMAKE_BUILD_TYPE=Release -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DBUILD_TESTING=OFF
cmake --build . --config Release
cmake --build . --config Release --target install
