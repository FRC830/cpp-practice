#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        void setName(string newName) {
            name = newName;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main() {
    Person me;
    me.setName("Sir Jim the III");
    cout << me.getName() << "\n";
    return 0;
}