cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(MyExpressCppApp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(nlohmann_json CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(boost CONFIG REQUIRED)
# find_package(boost-beast CONFIG REQUIRED)
# find_package(boost-uuid CONFIG REQUIRED)

add_subdirectory(expresscpp)

add_executable(MyExpressCppApp main.cpp)
target_link_libraries(MyExpressCppApp PRIVATE expresscpp::expresscpp)

target_include_directories(MyExpressCppApp PUBLIC
                           "/Users/john/Documents/code/cpp/app-server/expresscpp/include"
                           )