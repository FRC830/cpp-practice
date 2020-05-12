#include <iostream>
using namespace std;

int factorialFinder(int x) { // recursive function
    if (x == 1) { // base case / stop condition - end the function when x = 1
        return 1;
    }
    else {
        return x * factorialFinder(x - 1); // recursive call
    }
}

int main() {
    int num;
    cin >> num;
    cout << factorialFinder(num) << endl;
}