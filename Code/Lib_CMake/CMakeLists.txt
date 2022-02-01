# This latter version is compatible with Python 3
cmake_minimum_required(VERSION 3.10)

# set the project name
project("Lib project")

# specify the executable and corresponding source file
add_executable(program
                        02-main.cpp
                        02-lib-folder/02-lib.cpp
                )

# tell the build system that we also have the '02-lib-folder' to search for headers into
target_include_directories(program PUBLIC 02-lib-folder)