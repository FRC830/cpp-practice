#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        Person(string initialName) {
            setName(initialName);
        }
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
    Person me("king of france II");
    cout << me.getName() << "\n";
    Person you("king of england III");
    cout << you.getName() << "\n";
    return 0;
}