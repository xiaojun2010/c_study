#include "Singleton.h"
#include <iostream>

// 初始化静态成员变量
Singleton *Singleton::This = new Singleton();

const Singleton *Singleton::getInstance() {
    if (!This) {
        This = new Singleton;
    }
    return This;
}

Singleton::Singleton() {
    // 可以留空或输出日志
    std::cout << "Singleton constructed" << std::endl;
}

Singleton::~Singleton() {
    // 可以留空或输出日志
    std::cout << "Singleton destructed" << std::endl;
}
