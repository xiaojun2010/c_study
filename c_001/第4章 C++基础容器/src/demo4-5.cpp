//
// Created by qqkk on 2025/1/14.
//
#include <string.h>
#include <iostream>

using namespace std;

const int MAX_LEN_NUM = 16;

int main(){

    char strHelloWorld1[] = {"hello"};
    char strHelloWorld2[] = {"world1"};

    char strHelloWorld3[MAX_LEN_NUM] = {0};
    strcpy(strHelloWorld3 ,strHelloWorld1);

    strncpy(strHelloWorld3 ,strHelloWorld2,2);

    strcat(strHelloWorld3,strHelloWorld2);

    unsigned int len = sizeof(strHelloWorld3) / sizeof(strHelloWorld3[0]);
    for (int index = 0; index < len; ++index) {
        cout << strHelloWorld3[index] <<" ";
    }
    cout << endl;

    return 0;
}