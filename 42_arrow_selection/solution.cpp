#include<iostream>


using namespace std;


class Cat{
    public:
        void meowNow(){
            cout << "Meow!" << endl;
        }
};


int main(){
    Cat pear;
    Cat *pearPtr = &pear;
    pearPtr->meowNow();
    return 0;
}