cmake_minimum_required(VERSION 3.15)

project(hello CXX)

add_executable(hello hello.cpp)
target_compile_features(hello PUBLIC cxx_std_17)

if (MSVC)
    target_compile_options(hello PUBLIC /W4 /WX)
else()
    target_compile_options(hello PUBLIC -Wall -Wextra -pedantic -Werror)
endif()
