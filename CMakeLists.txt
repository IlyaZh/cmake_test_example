cmake_minimum_required(VERSION 3.6)

project(MyApp)

enable_language(CXX)

if (WIN32)
set(COMPILER_PATH "C:/ProgramData/chocolatey/bin/")
set(CMAKE_C_COMPILER ${COMPILER_PATH}gcc.exe)
set(CMAKE_CXX_COMPILER ${COMPILER_PATH}g++.exe)
endif (WIN32)

enable_testing()

# file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES class.h class.cpp)

add_subdirectory(tests)

add_executable(MyProg main.cpp ${SOURCES})
add_library(MyProg_lib STATIC ${SOURCES})

target_compile_features(MyProg PUBLIC cxx_std_17)
target_compile_features(MyProg_lib PUBLIC cxx_std_17)
