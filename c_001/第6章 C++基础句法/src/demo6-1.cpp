// demo6-1.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"


#include <iostream>
using namespace std;
bool isLeapYear(unsigned int year)
{
    // 双分支if
    //if ( (year % 400 == 0) ||  (year%4==0 && year%100 != 0) )
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

typedef enum __COLOR
{
    RED,
    GREEN,
    BLUE,
    UNKOWN
}COLOR;

int main()
{
    // 是否是闰年
    cout << isLeapYear(2000) << endl;
    cout << isLeapYear(2020) << endl;
    cout << isLeapYear(2021) << endl;

    // b是否是a的倍数
    int a = 0;
    int b = 4;
    if ((a != 0) && b % a == 0)
    {
        cout << "b是a的倍数" << endl;
    }
    else
    {
        cout << "b不是a的倍数" << endl;
    }

    // 多分支条件的if
    // if, else if, else
    COLOR color0;
    color0 = BLUE;
    int c0 = 0;
    if (color0 == RED) {
        //cout << "red" << endl;
        c0 += 1;
    }
    else if (color0 == GREEN) {
        //cout << "green" << endl;
        c0 += 2;
    }
    else if (color0 == BLUE) {
        //cout << "blue" << endl;
        c0 += 3;
    }
    else {
        //cout << "unknown color" << endl;
        c0 += 0;
    }

    // 多分支条件的switch
    // switch,case,default
    COLOR color1;
    color1 = GREEN;
    int c1 = 0;
    switch (color1)
    {
        case RED:
        {
            //cout << "red" << endl;
            c1 += 1;
            break;
        }
        case GREEN:
        {
            //cout << "green" << endl;
            c1 += 2;
            break;
        }
        case BLUE:
        {
            //cout << "blue" << endl;
            c1 += 3;
            break;
        }
        default:
        {
            //cout << "unknown color" << endl;
            c1 += 0;
            break;
        }
    }


    return 0;
}
