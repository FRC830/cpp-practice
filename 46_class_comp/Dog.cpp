#include"Dog.h"
#include<iostream>

Dog::Dog(int a, DogBreed breedO)
:age(a), breed(breedO)
{ 
}

void Dog::printInfo(){
    cout << "This dog is " << age << " years old and its breed is ";
    breed.printBreed();
}