cmake_minimum_required(VERSION 2.6)
project(fortuneteller)

add_executable(fortuneteller main.cpp)

install(TARGETS fortuneteller RUNTIME DESTINATION bin)
