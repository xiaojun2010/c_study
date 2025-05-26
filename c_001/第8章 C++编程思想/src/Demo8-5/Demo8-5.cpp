//
// Created by rust on 2025/5/23.
//
// Demo8-5.cpp : 定义控制台应用程序的入口点。
//


#include <string>
#include<iostream>
using namespace std;

class LegacyRectangle {
public:
    LegacyRectangle(double x1, double y1, double x2, double y2) {
        _x1 = x1;
        _y1 = y1;
        _x2 = x2;
        _y2 = y2;
    }

    void LegacyDraw() {
        cout << "LegacyRectangle:: LegacyDraw()" << _x1 << " " << _y1 << " " << _x2 << " " << _y2 << endl;
    }

private:
    double _x1;
    double _y1;
    double _x2;
    double _y2;
};
//抽象类
class Rectangle {
public:
    //虚函数
    virtual void Draw(string str) = 0;
};

// 第一种适配的方式：使用多重继承
class RectangleAdapter : public Rectangle, public LegacyRectangle {
public:
    RectangleAdapter(double x, double y, double w, double h) : LegacyRectangle(x, y, x + w, y + h) {
        cout << "RectangleAdapter(int x, int y, int w, int h) => " << " x="<< x << " y="<<y << " w="<<w  << " h="<<h << endl;
    }

    /**
     * 虚函数的实现
     * @param str
     */
    virtual void Draw(string str) {
        cout << "RectangleAdapter::Draw()" << endl;
        LegacyDraw();
    }
};

// 组合方式的Adapter
class RectangleAdapter2 : public Rectangle {
public:
    RectangleAdapter2(double x, double y, double w, double h) : _lRect(x, y, x + w, y + h) {
        cout << "RectangleAdapter2(int x, int y, int w, int h)" << endl;
    }

    virtual void Draw(string str) {
        cout << "RectangleAdapter2::Draw()" << endl;
        _lRect.LegacyDraw();
    }

private:
    LegacyRectangle _lRect;
};

int main() {
    double x = 20.0, y = 50.0, w = 300.0, h = 200.0;
    RectangleAdapter ra(x, y, w, h);
    Rectangle *pR = &ra;
    pR->Draw("Testing Adapter");

    cout << endl;
    RectangleAdapter2 ra2(x, y, w, h);
    Rectangle *pR2 = &ra2;
    pR2->Draw("Testing2 Adapter");

    return 0;
}
