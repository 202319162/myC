# 1. 设置最低版本
cmake_minimum_required(VERSION 3.25)

# 2. 项目名称，明确启用 C 语言支持
project(myFirstTest C)

# 3. 设置 C23 标准
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 4. 自动递归搜索所有 .c 文件
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.c")

# 调试信息：在控制台输出找到的文件，确认文件是否被扫描到
message(STATUS "Found source files: ${SOURCE_FILES}")
# 开启所有警告 (-Wall) 和 额外警告 (-Wextra)
add_compile_options(-Wall -Wextra -Wpedantic)
# 5. 遍历并创建可执行程序
foreach(file ${SOURCE_FILES})
    # 获取文件名（不含路径和后缀）
    get_filename_component(file_name ${file} NAME_WE)

    # 检查目标是否已存在，防止重名冲突
    if(TARGET ${file_name})
        message(WARNING "Target ${file_name} already exists! Skipping ${file}")
    else()
        add_executable(${file_name} ${file})
    endif()
endforeach()