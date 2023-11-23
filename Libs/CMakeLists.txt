cmake_minimum_required(VERSION 3.22.2)
project(Leaver.DLL)
set(SOURCE_DLL Leaver.cpp Leaver.h)
add_library (Leaver.DLL SHARED ${SOURCE_DLL})