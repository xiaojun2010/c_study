cmake_minimum_required(VERSION 3.31)
project(c_001)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS -stdlib=libstdc++)


# 添加头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(c_001 "第4章 C++基础容器/src/demo4-4.cpp" "第4章 C++基础容器/src/demo4-5.cpp" "第4章 C++基础容器/src/demo4-4-01.cpp" "第4章 C++基础容器/src/demo4-4-02.cpp" "第4章 C++基础容器/src/demo4-6.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-1.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-2.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-2-02.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-3.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-4.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-5.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-6.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-7.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-8.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-9.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-10.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-11.cpp" "第5章 彻底学会 C++ 指针，引用/src/demo5-12.cpp" "第6章 C++基础句法/src/demo6-1.cpp" "第6章 C++基础句法/src/demo6-2.cpp" "第6章 C++基础句法/src/demo6-3.cpp" "第6章 C++基础句法/src/demo6-4.cpp" "第6章 C++基础句法/src/demo6-5.cpp" "第6章 C++基础句法/src/demo6-6.cpp" "第6章 C++基础句法/src/demo6-7.cpp" "第6章 C++基础句法/src/demo6-8.cpp" "第6章 C++基础句法/src/demo6-9.cpp" "第7章 C++高级语法/src/Complex.cpp" "第7章 C++高级语法/src/demo7-1.cpp" "第7章 C++高级语法/src/demo7-1.cpp" "第7章 C++高级语法/src2/Complex2.cpp" "第6章 C++基础句法/src/demo6-6.cpp" "第7章 C++高级语法/src3/CTimeSpan.cpp" include/Complex2.h "第7章 C++高级语法/src/demo7-2.cpp" "第7章 C++高级语法/src/demo7-3.cpp" "第7章 C++高级语法/src/demo7-4.cpp")

add_executable(demo4-4 "第4章 C++基础容器/src/demo4-4.cpp")
add_executable(demo4-5 "第4章 C++基础容器/src/demo4-5.cpp")
add_executable(demo4-4-01 "第4章 C++基础容器/src/demo4-4-01.cpp")
add_executable(demo4-4-02 "第4章 C++基础容器/src/demo4-4-02.cpp")
add_executable(demo4-6 "第4章 C++基础容器/src/demo4-6.cpp")
add_executable(demo5-1 "第5章 彻底学会 C++ 指针，引用/src/demo5-1.cpp")
add_executable(demo5-2 "第5章 彻底学会 C++ 指针，引用/src/demo5-2.cpp")
add_executable(demo5-2-02 "第5章 彻底学会 C++ 指针，引用/src/demo5-2-02.cpp")
add_executable(demo5-3 "第5章 彻底学会 C++ 指针，引用/src/demo5-3.cpp")
add_executable(demo5-4 "第5章 彻底学会 C++ 指针，引用/src/demo5-4.cpp")
add_executable(demo5-8 "第5章 彻底学会 C++ 指针，引用/src/demo5-8.cpp")
add_executable(demo5-12 "第5章 彻底学会 C++ 指针，引用/src/demo5-12.cpp")
add_executable(demo6-3 "第6章 C++基础句法/src/demo6-3.cpp")
add_executable(demo6-7 "第6章 C++基础句法/src/demo6-7.cpp")
add_executable(demo7-1 "第7章 C++高级语法/src/demo7-1.cpp")
add_executable(Complex "第7章 C++高级语法/src/Complex.cpp")

add_executable(Complex2 "第7章 C++高级语法/src2/Complex2.cpp")
add_executable(CTimeSpan "第7章 C++高级语法/src3/CTimeSpan.cpp")
add_executable(demo7-2 "第7章 C++高级语法/src/demo7-2.cpp")
add_executable(demo7-4 "第7章 C++高级语法/src/demo7-4.cpp")