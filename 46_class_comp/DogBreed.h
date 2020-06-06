#ifndef DOGBREED_H
#define DOGBREED_H
#include<string>

using namespace std;

class DogBreed{

    public:
        DogBreed(string a);
        void printBreed();
    private:
        string breed;


};

#endif