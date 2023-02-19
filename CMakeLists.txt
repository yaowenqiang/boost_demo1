cmake_minimum_required(VERSION 3.23)
project(boost_demo1)

set(CMAKE_CXX_STANDARD 14)

set(BOOST_ROOT "/Users/jack/Downloads/boost_1_65_1")
set(Boost_LIBRARY_DIR "/Users/jack/Downloads/boost_1_65_1/libs")
include_directories(${Boost_INCLUDE_DIR})
include_directories(${Boost_LIBRARY_DIR})

#find_package(Boost 1.65.1 COMPONENTS system filesystem REQUIRED)

find_package(Boost 1.65.1)
#find_package(Boost 1.65.1 COMPONENTS system filesystem REQUIRED)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
else()
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    message(STATUS "Boost_VERSION_STRING: ${Boost_VERSION_STRING}")

endif()

add_executable(boost_demo1 main.cpp)

