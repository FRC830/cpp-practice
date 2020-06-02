#include <iostream>

using namespace std;

string is_greater(int num1, int num2) {
    if (num1 > num2) {
        return "greater";
    } else if (num1 == num2) {
        return "equal";
    } else {
        return "less";
    }
}
int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    string result;
    result = is_greater(a, b);
    cout << result << "\n";
}