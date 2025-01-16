//
// Created by qqkk on 2025/1/15.
//内存溢出
//
#include <string.h>
#include <iostream>

using namespace std;

const int MAX_LEN_NUM = 30;

int main() {
    char strHelloWorld1[] = {"hello"};
    char strHelloWorld2[] = {"world1"};
    char strHelloWorld3[MAX_LEN_NUM] = {0};

    strcpy(strHelloWorld3, strHelloWorld1);
    //strcpy_s()
    strncpy(strHelloWorld3, strHelloWorld2, 2);
//strcpy_s()
    strcat(strHelloWorld3, strHelloWorld2);
//    strcpy_s()
    unsigned int len = strlen(strHelloWorld3);
    //strlen_s
    for (unsigned int index = 0; index < len; ++index) {
        cout << strHelloWorld3[index] << " ";
    }
    cout << endl;

    strcat(strHelloWorld2, "Welcome to C++");
    return 0;
}