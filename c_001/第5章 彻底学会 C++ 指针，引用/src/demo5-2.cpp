//
// Created by qqkk on 2025/1/16.
//
#include <iostream>

using namespace std;

int main()
{
    int i = 4;
    int * iP = &i;
    cout << (*iP) <<endl;

    double d =3.14;
    double * dP = &d;
    cout << (*dP) <<endl;

    char c = 'a';
    char * cP = &c;
    cout << (*cP) <<endl;


    return 0;

}