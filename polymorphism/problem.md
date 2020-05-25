# Polymorphism

[If this topic was confusing, here's Bucky's Video](https://www.youtube.com/watch?v=R_PPA9eejDw&list=PLAE85DE8440AA6B83&index=55)


Polymorphism is the idea that a method that is inherited by multiple classes can used in different ways. For example, if there are multiple enemies in a video game that all have an `Attack` method, they can all used the method the same way, but different values can be set to change how the method works.

In the example below, I used the `protected` access keyword. This essentially means that derived classes are the only things that can access members from the base class.


```cpp

class Weapon {

    protected:
        int attackPower;

    public:
        void setAttackPower(int a){
            attackPower = a;
        }

};

class Stick: public Weapon{
    public:
        void printInfo(){
            cout << "I am a stick and I do " << attackPower << " damage!";
        }
};
class Spatula: public Weapon{
    public:
        void printInfo(){
            cout << "I am a Spatula and I do " << attackPower << " damage!";
        }
};

int main(){

    Stick woodStick;
    Spatula spatt;
    woodStick.setAttackPower(1);
    spatt.setAttackPower(5);
    woodStick.printInfo();
    spatt.print();

    //The code above will print out the description of both weapons and their individual attack powers.

}



```

Create a base class called `HealItem` and make it have a protected int variable called `healPower` and make a public method to set the variable.
Create two different derived classes that will both heal different amounts of health. Make methods for both to print out their name and the amount of health they heal.
Make two instances of the object in `main()` and print out their descriptions. 