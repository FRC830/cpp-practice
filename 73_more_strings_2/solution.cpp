#include<iostream>
#include<string>


using namespace std;

string testInfo("My name is Steve and I like money.");

int main(){

    testInfo.replace(11,5,"Christopher");
    testInfo.insert(34, "to make ");
    cout << testInfo << endl;

}