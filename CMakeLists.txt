cmake_minimum_required(VERSION 3.0.0)
project(Recognition VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(OpenCV REQUIRED)

message( STATUS "OpenCV library status:" )
message( STATUS "    version: ${OpenCV_VERSION}" )
message( STATUS "    libraries: ${OpenCV_LIBS}" )
message( STATUS "    include path: ${OpenCV_INCLUDE_DIRS}" )

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Recognition main.cpp)

target_link_libraries(Recognition ${OpenCV_LIBS})

set(OpenCV_DIR C:\dev\opencv\build\x64\vc15\lib)