#include <iostream>
using namespace std;

int main() {
    int cash[5] = {20, 54, 76, 132, 46};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += cash[i];
    }
    cout << sum << endl;
}