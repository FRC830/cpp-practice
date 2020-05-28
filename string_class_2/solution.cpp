#include<iostream>
#include<string>

using namespace std;


string someThing("FortyTwo");
string answerToLifeAndEverything;
answerToLifeAndEverything.assign(someThing);

int main(){
    answerToLifeAndEverything.assign(someThing);
    cout << someThing << endl;
    cout << answerToLifeAndEverything << endl;

}