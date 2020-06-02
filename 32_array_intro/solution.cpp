#include <iostream>
using namespace std;

int main() {
    int squares[5] = {1, 4, 9, 16, 25}; // array initialiser list
    cout << "What number perfect square(1-5): ";
    int num;
    cin >> num;
    cout << squares[num - 1] << endl; // the array index starts at 0 so squares[0] = 1, squares[1] = 4, and squares[1] = 9 ...
}