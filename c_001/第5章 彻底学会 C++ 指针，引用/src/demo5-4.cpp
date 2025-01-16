//
// Created by qqkk on 2025/1/16.
//
#include <iostream>

using namespace std;

unsigned int MAX_LEN = 11;

int main() {
    //指针的指针
    int a = 123;
    int *b = &a;
    int **c = &b;

    //NULL的使用
    int *pA = NULL;

    pA = &a;
    if (pA != NULL) { //判断 NULL 指针
        cout << (*pA) << endl;
    }
    pA = NULL; // pA 不用时，置为 NULL

    return 0;

}