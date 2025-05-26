//
// Created by rust on 2025/5/22.
//
// Demo8-3.cpp : 定义控制台应用程序的入口点。
//
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//




#include <stdio.h>



// TODO:  在此处引用程序需要的其他头文件


#include <iostream>
using namespace std;

void func(void* i)
{
    cout << "func(void* i)" << endl;
}
void func(int i)
{
    cout << "func(int i)" << endl;
}

int main()
{
    int* pi = NULL;
    int* pi2 = nullptr;
    char* pc = NULL;
    char* pc2 = nullptr;
    // func(NULL);                      // func(int i)
    func(nullptr);                 // func(void* i)
    func(pi);                        // func(void* i)
    func(pi2);                       // func(void* i)
    func(pc);                        // func(void* i)
    func(pc2);                       // func(void* i)



    return 0;
}

