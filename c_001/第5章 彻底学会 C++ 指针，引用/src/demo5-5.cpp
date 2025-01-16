//
// Created by qqkk on 2025/1/16.
//
#include <iostream>

using namespace std;


int main() {
    char ch = 'a';
    char *cp = &ch;
    char ch2 = *cp;

    ch2 = *cp + 1;
    *(cp + 1) = 'a';
    ch2 = *(cp + 1);
    return 0;

}