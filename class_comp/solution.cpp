#include<iostream>

using namespace std;


class DogBreed{

    public:
        DogBreed(string b){
            breed = b;
        }
        void printBreed(){
            cout << breed;
        }
    private:
        string breed;


};


class Dog {

    public:
        Dog(int a, DogBreed breedO): age(a) , breed(breedO) {}
        void printInfo() {
            cout << "The age of this dog is " << age << " and the breed is ";
            breed.printBreed();
        }

    private:
        int age;
        DogBreed breed;
};


int main(){

    DogBreed husky ("Husky");
    Dog puppy(1,husky);

    puppy.printInfo();


}