#include<iostream>
#include<string>


using namespace std;

string fruits("Apple Peach Grapes Grapes Apple Tomatoes");
string subfruits = fruits.substr(0,31);

string testStr("Dog Dog");

int main(){
    cout << subfruits << endl;
    cout << "The first occurance of Grapes is at " << subfruits.find("Grapes") << endl;
    cout << "The last occurance of Apple is at " << subfruits.rfind("Apple") << endl;
}