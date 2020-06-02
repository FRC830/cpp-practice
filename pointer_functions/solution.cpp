#include <iostream>
using namespace std;

void passByValue(int val) {
    cout << "pass by value before " << val << "\n";
    val = 99;
}

void passByReference(int &val) {
    cout << "pass by reference before " << val << "\n";
    val = 99;

}

void passByPointer(int *val) {
    cout << "pass by pointer before " << *val << "\n";
    *val = 99;
}

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    passByValue(a);
    cout << a << "\n";
    passByReference(b);
    cout << b << "\n";
    passByPointer(&c);
    cout << c << "\n";
}

