#include <iostream>
#include"Point.h"
using namespace std;

int main()
{
    Point p1;
    cout<<"p1.getx()="<<p1.getx()<<endl;
    cout<<"p1.gety()="<<p1.gety()<<endl;
    Point p2(3,5);
    cout<<"p2.getx()="<<p2.getx()<<endl;
    cout<<"p2.gety()="<<p2.gety()<<endl;
    Point p3(p2);
    cout<<"Copy constructor with calling syntax "<<endl;
    cout<<"p3.getx()="<<p3.getx()<<endl;
    cout<<"p3.gety()="<<p3.gety()<<endl;
    Point p4=p1;
    cout<<"Copy constructor with memberwise assignment"<<endl;
    cout<<"p4.getx()="<<p4.getx()<<endl;
    cout<<"p4.gety()="<<p4.gety()<<endl;
    return 0;
}
