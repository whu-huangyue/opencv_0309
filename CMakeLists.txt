# cmake needs this line 要求的最低版本
cmake_minimum_required(VERSION 2.8)
 
# Define project name 定义工程名
project(opencv)
 
# Find OpenCV
find_package(OpenCV REQUIRED)
 
include_directories(
# include
  ${OpenCV_INCLUDE_DIRS}
)

# Declare the executable target built from your sources 声明可执行目标文件及源文件
add_executable(opencv opencv.cpp)	# 目标文件，源文件0,源文件1,...
 
# Link your application with OpenCV libraries 将目标文件与库链接
target_link_libraries(opencv ${OpenCV_LIBS})	# 目标文件，库路径

# bebug用的
# set(CMAKE_BUILD_TYPE DEBUG)
# add_compile_options(-O3)
