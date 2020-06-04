#include <iostream>
#include <string>
using namespace std;

void whatType(int x){
    cout << "i am an integer " << endl;
}
void whatType(string x){
    cout << "i am a string" << endl;
}

int main() {
    int a = 54;
    string b = "I am a string";

    whatType(a);
    whatType(b);
}