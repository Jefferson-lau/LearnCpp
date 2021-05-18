#cmake_minimum_required(VERSION 3.19)
#project(LearnC__)

#set(CMAKE_CXX_STANDARD 11)

#add_executable(LearnC__ "PreprocessingCommand.cpp" 1001.cpp 1002.cpp)
#add_executable(1001 1001.cpp)

cmake_minimum_required(VERSION 3.17)
project(PAT)

set(CMAKE_CXX_STANDARD 11)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
