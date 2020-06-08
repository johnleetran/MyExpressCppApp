1. Install vcpkg - https://github.com/Microsoft/vcpkg
2. Install dependencies 
```
cd vcpkg
./vcpkg install nlohmann-json boost fmt gtest
``` 
3. build
```
mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=/Users/john/Documents/code/cpp/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .

# OR you can use ninja

mkdir build
cd build
cmake -GNinja -DCMAKE_TOOLCHAIN_FILE=/Users/john/Documents/code/cpp/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_BUILD_TYPE=Debug ..
ninja

```
4. Run app
```
./MyExpressCppApp
```
5. Sample request
```
curl localhost:3000
```