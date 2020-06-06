#include"DogBreed.h"
#include<iostream>

using namespace std;

DogBreed::DogBreed(string a)
: breed(a)

{
}

void DogBreed::printBreed(){
    cout << breed << endl;
}