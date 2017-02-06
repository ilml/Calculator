cmake_minimum_required(VERSION 3.6)
project(Calculator)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp  Input.cpp Input.h ToPostfix.cpp ToPostfix.h )# Output.cpp Output.h)
set(SOURCE_FILES main.cpp Input.cpp Input.h Symbol.cpp Symbol.h ToPostfix.cpp ToPostfix.h Output.h Output.cpp)
add_executable(Calculator ${SOURCE_FILES})