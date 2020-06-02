#include<iostream>

using namespace std;


float circle_area(int r = 1);

int main(){

    cout << circle_area() << endl;

}

float circle_area(int r){
    return (r*r) * 3.14;
}
