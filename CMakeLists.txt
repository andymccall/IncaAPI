cmake_minimum_required(VERSION 3.9)
project(IncaAPI)

set(CMAKE_CXX_STANDARD 11)

add_executable(IncaAPI main.cpp ApplicationKit/Application.cpp ApplicationKit/Application.h AngryIncaApplication.cpp AngryIncaApplication.h)