cmake_minimum_required(VERSION 3.23)
project(boost_demo1)

set(CMAKE_CXX_STANDARD 14)

set(BOOST_ROOT "/usr/local/Cellar/boost/1.81.0_1/")
include_directories(${Boost_INCLUDE_DIR})
include_directories(/usr/local/include)
link_directories(/usr/local/lib)
#include_directories(${Boost_LIBRARY_DIR}/boost)

#find_package(Boost 1.65.1 COMPONENTS system filesystem REQUIRED)

#find_package(Boost 1.81.0)
find_package(Boost 1.81.0 COMPONENTS system filesystem REQUIRED)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
else()
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    message(STATUS "Boost_VERSION_STRING: ${Boost_VERSION_STRING}")

endif()

add_executable(boost_demo1 main.cpp)
target_link_libraries(boost_demo1 ${Boost_LIBRARIES})
#$(LINK)$(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP)$(LIBS) -lboost_system -lboost_thread
