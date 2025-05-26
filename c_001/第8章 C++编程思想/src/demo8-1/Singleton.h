#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
using namespace std;

class Singleton {
public:
    static const Singleton *getInstance();

    static void DoSomething() {
        cout << "Do Something" << endl;
    }

    // 将构造和析构函数私有化，防止外部访问
private:
    Singleton();            // 构造函数
    ~Singleton();           // 析构函数

    static Singleton* This; // 单例实例指针 // 使用静态变量帮助解决资源的分配和释放
};

#endif // SINGLETON_H