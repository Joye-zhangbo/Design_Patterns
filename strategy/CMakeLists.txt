cmake_minimum_required(VERSION 3.2.0)

project(strategy)

include_directories(
  include
  $(PROJECT_SOURCE_DIR)
  C:\\Develop\\opencv\\build\\x64\\MinGW\\install\\include
  C:\\Develop\\opencv\\build\\x64/MinGW\\install\\include\\opencv2
  C:\\MinGW\\include
)

link_directories(
  C:\\Develop\\opencv\\build\\x64\\MinGW\\install\\x64\\mingw\\lib
)

link_libraries(libopencv_core412.dll.a)
link_libraries(libopencv_highgui412.dll.a)
link_libraries(libopencv_imgcodecs412.dll.a)

add_executable(${PROJECT_NAME} src/main.cpp src/${PROJECT_NAME}.cpp)
