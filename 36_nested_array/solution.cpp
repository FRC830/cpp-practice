#include <iostream>

using namespace std;

int main() {
    int nested[4][3] = {
        {1, 2, 3},   // row 0
        {4, 5, 6},   // row 1
        {7, 8, 9},   // row 2
        {10, 11, 12} // row 3
    };
    for (int row=0;row<4;row++) {
        for (int col=0;col<3;col++) {
            cout << nested[row][col] << " ";
        }
        cout << "\n";
    }
}