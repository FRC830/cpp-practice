#include<iostream>
#include<string>



using namespace std;


void askName(){

    string name;
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "So your name is '" << name << "' ? " << endl;
    cout << "That's a pretty lame name (。_。)" << endl;

}

int main(){

    askName();

}