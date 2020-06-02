#include<iostream>


using namespace std;


class HealItem{

    protected:
        int healPower;

    public:
        void setHealPower(int a){
            healPower = a;
        }



};

class GreenApple: public HealItem{
    public:
        void printDesc(){
            cout << "I am a Green Apple and I heal " << healPower << " health!" << endl; 
        }
};

class RedApple: public HealItem{
    public:
        void printDesc(){
            cout << "I am a Red Apple and I heal " << healPower << " health!" << endl;
        }
};

int main(){

    GreenApple apple1;
    RedApple apple2;
    apple1.setHealPower(25);
    apple2.setHealPower(50);
    apple1.printDesc();
    apple2.printDesc();
}