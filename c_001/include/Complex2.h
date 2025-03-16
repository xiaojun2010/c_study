//
// Created by qqkk on 2025/3/14.
//

#ifndef C_001_COMPLEX2_H
#define C_001_COMPLEX2_H
#include <iostream>

using namespace std;

class Complex2 {
public:
    // 默认构造函数
    Complex2();

    // 构造函数
    Complex2(double r, double i);

    // 析构函数
    virtual ~Complex2();

    // 拷贝构造
    Complex2(const Complex2 &x);

    // =号运算符
    Complex2 &operator=(const Complex2 &c);
    // 运算符重载
    Complex2 operator+(const Complex2 &c) ;

    //前置++
    Complex2& operator ++();

    //后置++
    Complex2 operator ++(int);

    friend ostream& operator << (ostream& os,const Complex2 &x);

    friend istream& operator >> (istream& is, Complex2 &x);


    //const 修饰的函数，函数体内成员变量的值不允许改变
    double GetReal() const { return _real; }

    void SetReal(double d) { _real = d; }

    double GetImage() const { return _image; }

    void SetImage(double i) { _image = i; }




private:
    double _real;          // 复数的实部
    double _image;         // 复数的虚部
};

#endif //C_001_COMPLEX2_H
