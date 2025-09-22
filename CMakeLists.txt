cmake_minimum_required(VERSION 3.8)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

project(Torus VERSION 0.01)

add_subdirectory(TorusClient)
add_subdirectory(TorusServer)
add_subdirectory(TorusShared)