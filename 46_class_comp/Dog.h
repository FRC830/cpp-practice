#ifndef DOG_H
#define DOG_H
#include"DogBreed.h"

class Dog{

    public:
        Dog(int a, DogBreed breedO);
        void printInfo();
    private:
        int age;
        DogBreed breed;


};

#endif