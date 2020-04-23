#include <iostream>
using namespace std;
// Copied from github.com/buckyroberts/Source-Code-from-Tutorials/blob/master/C%2B%2B/20_cppBeginners.cpp

int main() {
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first persons age or -1 to quit" << endl;
    cin >> age;

    while(age != -1){
        ageTotal = ageTotal + age; // or shorthand: ageTotal += age;
        numberOfPeopleEntered++;

        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Average age: " << ageTotal / numberOfPeopleEntered;

    return 0;
}