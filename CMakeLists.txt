cmake_minimum_required(VERSION 3.6)

project(MyApp)

enable_testing()

# file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES class.h class.cpp)

add_subdirectory(tests)

add_executable(MyProg main.cpp ${SOURCES})
add_library(MyProg_lib STATIC ${SOURCES})

target_compile_features(MyProg PUBLIC cxx_std_17)
target_compile_features(MyProg_lib PUBLIC cxx_std_17)
