cmake_minimum_required(VERSION 3.12)
project(UTPod)

set(CMAKE_CXX_STANDARD 11)

add_executable(UTPod UtPodDriver.cpp UtPod.cpp UtPod.h Song.cpp Song.h)