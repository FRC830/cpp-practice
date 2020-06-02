#include <iostream>

int main() {
    int a, b;
    std::cout << "Input a number:\n";
    std::cin >> a;
    std::cout << "Input another number:\n";
    std::cin >> b;
    if (a > b) {
        std::cout << "That's pretty great\n";
    } else {
        std::cout << "That sucks man\n";
    }
}