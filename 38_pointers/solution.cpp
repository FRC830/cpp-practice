#include <iostream>
using namespace std;

int main(){
    int a = 5;
    cout << &a << endl; // address operator (&)
    int *aPointer; // a pointer
     aPointer = &a;
     cout << aPointer << endl;
     *aPointer = 8;
     cout << a << endl;
}