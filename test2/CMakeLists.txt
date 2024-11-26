cmake_minimum_required(VERSION 3.15)

project(test2)

# 搜索源文件
aux_source_directory(./ SRC)

# 头文件路径
include_directories(${HEADPATH})

# 指定生成的可执行文件的保存路径
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})

# 指定静态库路径
link_directories(${LIBPATH})

# 链接静态库
link_libraries(${SORTLIB})

# 生成可执行文件
add_executable(${APPNAME2} ${SRC})
