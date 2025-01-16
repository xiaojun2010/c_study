//
// Created by qqkk on 2025/1/14.
//
#include <string.h>
#include <iostream>

using namespace std;

const int MAX_LEN_NUM = 30;

int main() {
    char strHelloWorld1[] = {"helloworld"};

    cout << std::strlen(strHelloWorld1) << endl;
    cout << sizeof(strHelloWorld1) << endl;

    char strHelloWorld2[] = {"helloworld"};
    char strHelloWorld3[] = {"hflloworld"};
    char strHelloWorld4[] = {"hdlloworld"};

    cout << strcmp(strHelloWorld1, strHelloWorld2) << endl;
    cout << strcmp(strHelloWorld1, strHelloWorld3) << endl;
    cout << strcmp(strHelloWorld1, strHelloWorld4) << endl;

    return 0;
}