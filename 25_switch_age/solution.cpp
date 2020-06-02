#include <iostream>

using namespace std;

int main(){
    int age = 16;
    switch(age){

        case 14:
            cout << "You are in high school!" << endl;
            break;
        case 18:
            cout << "You are in college!" << endl;
            break;
        case 21:
            cout << "You are an adult!" << endl;
            break;
        default:
            cout << "Nothing special happens!" << endl;

    }

}