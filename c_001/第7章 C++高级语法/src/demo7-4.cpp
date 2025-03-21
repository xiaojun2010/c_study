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

    virtual void Show() = 0;

    void SetColor(int color){
        _color = color;

    }
    void Display(){
        cout << Area() <<endl;
    }

private:
    int _color;

};

class Square : public Shape
{
public:
    Square(double len) :_len(len) {

    }
    double Area() const{
        return _len * _len;
    }

    void Show(){
        cout <<" Square " <<endl;
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
    void Show(){
        cout <<" Circle " <<endl;
    }
    void Display();

private:
    double _radius;
};

class Triangle : public Shape
{
public:
    Triangle(double len,double height):_len(len),_height(height){

    }

    void Show(){
        cout << "Triangle" << endl;
    }

    double Area() const {
        return 0.5 * _len * _height;
    }

private:
    double _len;
    double _height;
};

int main(){

    Square s1(2.0);
    s1.SetColor(1);

    Circle c1(2.0);

    Shape* shapes[2];
    shapes[0] = &s1;
    shapes[1] = &c1;

    for (unsigned int index = 0; index < 2; ++index) {
        shapes[index] -> Display();
    }

    return 0;
}