cmake_minimum_required(VERSION 3.23)
project(WordCounter C)

set(CMAKE_C_STANDARD 99)

add_executable(WordCounter main.c functions.c functions.h)
