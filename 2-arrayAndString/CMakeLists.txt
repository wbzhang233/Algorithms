cmake_minimum_required(VERSION 3.14)
project(array2string)

set(CMAKE_CXX_STANDARD 14)


# 00-数字转字符串
add_executable(array2String 00-char2number.cpp)

# 01 字符串使用
add_executable(stringtest stringtest.cpp)

# 02 字符串测试
add_executable(arraytest arrayTest.cpp)