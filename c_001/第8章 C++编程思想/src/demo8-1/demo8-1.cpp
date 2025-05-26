// demo8-1.cpp : 定义控制台应用程序的入口点。
//

// 或是经常使用但不常更改的
// 特定于项目的包含文件
//


#include <iostream>
// TODO:  在此处引用程序需要的其他头文件
#include "Singleton.h"
using namespace std;

int main()
{
    Singleton::getInstance()->DoSomething();

    Singleton::getInstance()->DoSomething();

    return 0;
}

