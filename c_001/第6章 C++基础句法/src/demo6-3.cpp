//
// Created by qqkk on 2025/3/3.
//
#pragma pack(1)

#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    union Score
    {
        double ds;
        char level;
    };
    struct Student
    {
        char name[6];
        int age;
        Score s;
    };
    cout << sizeof(Score) << endl;      // 8 union   共同使用同一个空间，取最大的一块 , double 是最大的
    cout << sizeof(Student) << endl;    // 24

    struct s1
    {
        char x;
        int z;
        short y;
    };

    struct s2
    {
        char x;
        short y;
        int z;

    };
    struct s3
    {
        char x;
        short y;
        double z;

    };
    struct s4
    {
        char x;
        double z;
        short y;


    };
    cout << sizeof(s1) << endl;
    cout << sizeof(s2) << endl;
    cout << sizeof(s3) << endl;
    cout << sizeof(s4) << endl;



    Student s1;
    strcpy(s1.name, "lili");
    s1.age = 16;
    s1.s.ds = 95.5;
    s1.s.level = 'A';

    cout << sizeof(Student) << endl;    // 24     18


    return 0;
}

