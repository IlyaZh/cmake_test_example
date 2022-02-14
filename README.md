# cmake_test_example
Example of C++ project with tests and cmake build system. I'm use it as template for new projects

## How it works?
On windows you should edit CMakeLists.txt file in root directory and will set COMPILER_PATH full path to gcc.exe and g++.exe files or add another compiler.
make and build programm following commands:
1. mkdir build
2. cd build
3. cmake ..
4. cmake --build .

## How to use?
To run programm execute ./build/MyProg
To run tests execute ./build/tests/tests
