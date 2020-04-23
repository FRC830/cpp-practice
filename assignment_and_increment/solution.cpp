#include <iostream>

using namespace std;
int main() {
    int x = 10;
    x*=5; // 50
    x-=3; // 47
    x+=1; // 48
    x/= 4;// 12
    x%=5; // 2
    cout << x << "\n";

    cout << x++ << "\n"; // This remains 2, as it is evaluated after it is printed
    cout << x << "\n"; // Notice that this is 3
    cout << ++x << "\n"; // This is 4, as it is evaluated before it is printed
    cout << x << "\n";   // Notice that this is still 4
}