cmake_minimum_required(VERSION 3.13)
project(SIMP)

set(CMAKE_CXX_STANDARD 14)

add_executable(SIMP
        .idea/encodings.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/SIMP.iml
        .idea/vcs.xml
        .idea/workspace.xml
        .gitignore
        LICENSE
        README.md source/main.cpp source/input_parser.cpp source/input_parser.h source/simp_types.h)
