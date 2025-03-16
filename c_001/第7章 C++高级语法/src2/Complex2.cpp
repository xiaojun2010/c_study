#include <iostream>
#include "../include/Complex2.h"

using namespace std;


Complex2::Complex2() {
    _real = 0.0;
    _image = 0.0;
    cout << "默认构造函数 Complex2::Complex2()" << endl;
}

Complex2::Complex2(double r, double i) {
    _real = r;
    _image = i;
    cout << "构造函数 Complex2::Complex2(double r, double i)" << endl;
}


Complex2::~Complex2() {
    _real = _image = 0.0;
    cout << "析构函数 Complex::~Complex()" << endl;
}

/**
 *   拷贝构造
 * @param c
 */
Complex2::Complex2(const Complex2 &c) {
    _real = c._real;
    _image = c._image;
    cout << "拷贝构造 Complex::Complex(const Complex& c)" << endl;
}

/**
 *  拷贝构造
 * @param x
 * @return
 */
Complex2 Complex2::operator+(const Complex2 &x) {
    //拷贝构造
//    Complex2 tmp;
//    tmp._real = _real + x._real;
//    tmp._image = _image + x._image;
//    return tmp;

    return Complex2(_real + x._real, _image + x._image);
}

Complex2 &Complex2::operator=(const Complex2 &c) {
    if (this != &c) {
        _real = c._real;
        _image = c._image;
    }
    return *this;
}

//前置++
Complex2 &Complex2::operator++() {
    _real++;
    _image++;
    return *this;
}

//后置++
Complex2 Complex2::operator++(int) {
//    Complex2 tmp(*this);
//    _real++;
//    _image++;
//    return tmp;
    return Complex2(_real++, _image++);
}

ostream &operator<<(ostream &os, const Complex2 &x) {
    os << "real value is " << x._real << " image value is " << x._image;
    return os;
}

istream &operator>>(istream &is, Complex2 &x) {
    is >> x._real >> x._image;
    return is;
}

int main() {
    Complex2 a(1.0, 2.0);
    cout << a.GetReal() << endl;     // 1.0
    cout << a.GetImage() << endl;    // 2.0
    a.SetImage(2.0);
    a.SetReal(3.0);
    cout << a.GetReal() << endl;     // 3.0
    cout << a.GetImage() << endl;    // 2.0

    Complex2 b(3.0, 2.0);
    //Complex2 c = a + b;             // 是对 c 的定义

    Complex2 c;
    c = a + b;

    Complex2 d(c);

    Complex2 e;
    cout << "\n---------------------------\n" << endl;
    e = d++;
    cout << e << endl;
    cout << d << endl;

    e = ++d;
    cout << e << endl;
    cout << d << endl;

    int i;
    cin >> i;

    cout << i << endl;

    cout << "\n---------------------------\n" << endl;
    Complex2 e2;
    cin >> e2;
    cout << e2 << endl;

    return 0;

}
