cmake_minimum_required(VERSION 3.15)

project(sort)

# 搜索源文件
aux_source_directory(./ SRC)

# 头文件路径
include_directories(${HEADPATH})

# 生成库文件保存路径
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

# 生成静态库
add_library(${SORTLIB} STATIC ${SRC})