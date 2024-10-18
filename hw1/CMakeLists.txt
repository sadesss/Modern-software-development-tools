cmake_minimum_required(VERSION 3.23)
project(ssrpo_hw)

set(CMAKE_CXX_STANDARD 14)

add_executable(ssrpo_hw main.cpp User.cpp User.h Application.cpp Application.h IProduct.h IStore.h AppStore.cpp AppStore.h test.cpp)
