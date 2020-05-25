#include<iostream>

using namespace std;


class Quadralateral{

    public:
        Quadralateral()
        {
        }
        int numOfSides = 4;
};

class Square: public Quadralateral{

    public:
        Square()
        {
        }
        bool allRightAngles = true;
        void sayInfo(){
            cout << "I have " << numOfSides << "sides and "
            if(allRightAngles){
                cout << "I have all right angles!"
            }
        }


};


int main(){

    Quadralateral quadA ;
    cout << quadA.numOfSides;
    Square squareA;
    squareA.sayInfo();



}