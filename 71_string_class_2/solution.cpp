#include<iostream>
#include<string>


using namespace std;



void testStr("BrotherMoment");

string halfString(string x){
    for(int i = 0; i < x.length() / 2; i ++){
        cout << x.at(i);
    }
    cout << endl;
}

int main(){

    halfString(testStr);


}