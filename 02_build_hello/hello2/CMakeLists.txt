cmake_minimum_required(VERSION 3.15)

project(hello2 CXX)

add_executable(hello2 main.cpp hello.cpp)
target_compile_features(hello2 PUBLIC cxx_std_17)

if (MSVC)
    target_compile_options(hello2 PUBLIC /W4 /WX)
else()
    target_compile_options(hello2 PUBLIC -Wall -Wextra -pedantic -Werror)
endif()
