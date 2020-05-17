#include<iostream>

using namespace std;


class Circle(){
    
    public:
        Circle(float a)
    private:
        const float pi;



};

Circle::Circle(float a)
: pi(a)
{
}

int main(){

    Circle smallCir(3.14);
    cout << smallCir.pi << endl



}