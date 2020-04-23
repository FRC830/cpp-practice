#include <iostream>

using namespace std;

string return_message() {
    string my_cool_message = "My first function!";
    return my_cool_message;
}
int main() {
    string message = return_message();
    cout << message << "\n";
}