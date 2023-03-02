cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本号
project(my_project VERSION 1.0)


add_library (test_c test_c.h test_c.c)

# 添加可执行文件
add_executable(my_project main.cpp)

target_link_libraries(my_project test_c)
