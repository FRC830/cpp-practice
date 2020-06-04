#include<iostream>
#include<string>


using namespace std;


class Cat{
    public:
        void meowNow(){
            string catNoise = "Meow!";
            cout << catNoise << endl;
        }
};


int main(){
    Cat pear;
    Cat *pearPtr = &pear;
    pearPtr->meowNow();
    return 0;
}