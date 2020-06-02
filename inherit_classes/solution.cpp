#include<iostream>

using namespace std;


class Quadralateral{

    public:
        Quadralateral(){}
        int numOfSides = 4;
        bool allRight = false;
        void sayInfo(){
            cout << "I have " << numOfSides << " sides. My angles are not all right\n";
        }
};

class Square: public Quadralateral {

    public:
        Square(){}
        bool allRight = true;
        void sayInfo() {
            cout << "I have " << numOfSides << " sides. My angles are all right\n";
        }


};


int main(){
    Quadralateral quadA ;
    quadA.sayInfo();
    Square squareA;
    squareA.sayInfo();
}