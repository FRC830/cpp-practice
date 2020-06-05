#include"Circle.h"
#include<iostream>

using namespace std;


Circle::Circle(float a)
: radius(a)
{    
}
void Circle::printRadius(){
    cout << radius << endl;
}