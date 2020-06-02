#include <iostream>
using namespace std;

class Animal {
    public:
        void makeSound() {
            cout << "oink!\n";
        }
};

int main() {
    Animal pig;
    pig.makeSound();
    return 0;
}