#pragma once

#include <iostream>

using namespace std;

class Complex {
public:
    // 默认构造函数
    Complex();

    // 构造函数
    Complex(double r, double i);

    // 析构函数
    virtual ~Complex();

    // 拷贝构造
    Complex(const Complex &x);

    // =号运算符
    Complex &operator=(const Complex &c);

    //const 修饰的函数，函数体内成员变量的值不允许改变
    double GetReal() const { return _real; }

    void SetReal(double d) { _real = d; }

    double GetImage() const { return _image; }

    void SetImage(double i) { _image = i; }

    // 运算符重载
    Complex operator+(const Complex &c) const;

    Complex &operator+=(const Complex &c);

    Complex operator-(const Complex &c) const;

    Complex &operator-=(const Complex &c);

    Complex operator*(const Complex &c) const;

    Complex &operator*=(const Complex &c);

    Complex operator/(const Complex &c) const;

    Complex &operator/=(const Complex &c);

    bool operator==(const Complex &c) const;

    bool operator!=(const Complex &c) const;

    bool operator>(const Complex &c) const;

    bool operator>=(const Complex &c) const;

    bool operator<(const Complex &c) const;

    bool operator<=(const Complex &c) const;


    // 前置和后置++
    Complex &operator++();   //前置++
    Complex operator++(int); //后置++
    Complex &operator--();   //前置--
    Complex operator--(int); //后置--

//protected:

    friend ostream &operator<<(ostream &os, const Complex &x);

    friend istream &operator>>(istream &is, Complex &x);

private:
    double _real;          // 复数的实部
    double _image;         // 复数的虚部
};
