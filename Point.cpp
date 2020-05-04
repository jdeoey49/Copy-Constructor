#include<iostream>
#include"Point.h"
using namespace std;
Point::Point(int num1,int num2)
{
    cout<<"Default constructor with default value"<<endl;
    x_=num1;
    y_=num2;
}
Point::Point(Point &pref)
{
    cout<<"Copy Constructor which initialize a new object by another object of the same class"
    <<endl;
    x_=pref.getx();
    y_=pref.gety();
}
int Point::getx() const
{
    return x_;
}
int Point::gety() const
{
    return y_;
}
