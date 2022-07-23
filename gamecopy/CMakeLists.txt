cmake_minimum_required(VERSION 3.15)

project(game CXX)

add_executable(game main.cpp game.cpp)
target_compile_features(game PUBLIC cxx_std_17)

if (MSVC)
    target_compile_options(hello PUBLIC /W4 /WX)
else()
    target_compile_options(hello PUBLIC -Wall -Wextra -pedantic -Werror)
endif()
