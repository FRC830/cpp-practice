#include<iostream>

using namespace std;

template <class genericNumber>

genericNumber squareFunc(genericNumber a){
    return a * a;
}

int main(){
    cout << squareFunc(4) << endl;
    cout << squareFunc(5.5) << endl;

    // The code above will return 16 and 30.25
}