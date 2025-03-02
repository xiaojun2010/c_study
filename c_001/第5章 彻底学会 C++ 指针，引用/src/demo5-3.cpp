//
// Created by qqkk on 2025/1/16.
//
#include <iostream>

using namespace std;

unsigned int MAX_LEN = 11;

int main() {
    char strHelloworld[] = {"helloworld"};
    char const *pStr1 = "helloworld"; //const char* ； const 修饰的字符串内容 ；pStr1 指针是允许改变的
    char *const pStr2 = strHelloworld;
    char const *const pStr3 = "helloworld"; // const char * const
    pStr1 = strHelloworld; //pStr1 指向的值不变，但是 pStr1 指向可以变
//    pStr2 = strHelloworld; //pStr2 不可改 , pStr2 指向的值可以变
//    pStr3 = strHelloworld; //pStr3 不可改
    unsigned int len = strnlen(pStr2, MAX_LEN);
    cout << len << endl;
    for (unsigned int index = 0; index < len; ++index) {
//        pStr1[index] += 1; //pStr1 里的值不可改
        pStr2[index] += 1;
//        pStr3[index] += 1; //pStr3 里的值不可改
    }


    return 0;
}

