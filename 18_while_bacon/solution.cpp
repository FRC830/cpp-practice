#include <iostream>
using namespace std;
// Copied from github.com/buckyroberts/Source-Code-from-Tutorials/blob/master/C%2B%2B/18_cppBeginners.cpp
int main()
{
    int bacon = 0; // start point

    while(bacon <= 20){ // test to end the loop
        cout << "bacon is " << bacon << endl;
        bacon = bacon + 1; // number to increment by
        // HINT - there is a shorthand version: 'bacon = bacon + 1' is the same as 'bacon++';
    }

    return 0;
}