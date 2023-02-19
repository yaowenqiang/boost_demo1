cmake_minimum_required(VERSION 3.23)
project(boost_demo1)

set(CMAKE_CXX_STANDARD 14)

set(BOOST_ROOT "/Users/jack/Downloads/boost_1_81_0")
set(Boost_LIBRARY_DIR "/Users/jack/Downloads/boost_1_81_0/libs")

#find_package(Boost 1.65.1 COMPONENTS system filesystem REQUIRED)

#find_package(Boost 1.81.0)
find_package(Boost 1.81.0 COMPONENTS system filesystem REQUIRED)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
else()
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

endif()

add_executable(boost_demo1 main.cpp)

