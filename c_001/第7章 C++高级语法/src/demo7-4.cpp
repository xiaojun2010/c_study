//
// Created by qqkk on 2025/3/16.
//
#include <iostream>
using namespace std;

class Shape
{
public:
    //子类方法实现不一致，需要加 virtual
    virtual double Area() const{
       return 0;
    }
    void Display(){
        cout << Area() <<endl;
    }

};

class Square : public Shape
{
public:
    Square(double len) :_len(len) {

    }
    double Area() const{
        return _len * _len;
    }
    void Display();

private:
    double _len;
};

class Circle : public Shape
{
public:
    Circle(double radius):_radius(radius){

    }
    double Area() const{
        return 3.1415926 * _radius * _radius;
    }
    void Display();

private:
    double _radius;
};

int main(){

    Square s1(2.0);

    Circle c1(2.0);

    Shape* shapes[2];
    shapes[0] = &s1;
    shapes[1] = &c1;

    for (unsigned int index = 0; index < 2; ++index) {
        shapes[index] -> Display();
    }

    return 0;
}