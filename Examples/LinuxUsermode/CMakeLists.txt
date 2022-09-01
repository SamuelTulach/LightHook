cmake_minimum_required(VERSION 3.8)

project(LinuxUsermode)

file(GLOB_RECURSE sourcefiles
    "src/*.h"
    "src/*.c"
)

add_executable(LinuxUsermode ${sourcefiles})