#include <iostream>
using namespace std;

int main() {
    int myArray[9];

    cout << "Element  -  Value" << endl;
    for (int x= 0; x<=8; x++){ // 0...8 is 9 values
        myArray[x] = 99;
        cout << "myArray[" << x << "] = " << myArray[x] << endl;
    }
}