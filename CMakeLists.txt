cmake_minimum_required(VERSION 3.10)
project(OpenCVTest)

set(CMAKE_CXX_STANDARD 11)

# Đường dẫn OpenCV từ MSYS2
set(OpenCV_DIR "C:/msys64/ucrt64/lib/cmake/opencv4")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(test1 test1.cpp)
target_link_libraries(test1 ${OpenCV_LIBS})

add_executable(test123 test123.cpp)
target_link_libraries(test123 ${OpenCV_LIBS})