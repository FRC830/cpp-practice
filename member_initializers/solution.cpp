#include<iostream>

using namespace std;


class Circle{
    
    public:
        Circle(float a)
        : radius(a)
        {

        }
        void printRadius(){
            cout << "The raidus of this circle is " << radius << endl;
        }
    private:
        const float radius;



};


int main(){

    Circle smallCir(5.3);
    smallCir.printRadius();



}