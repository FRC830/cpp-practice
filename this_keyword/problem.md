# `this` Keyword

[If "this" is difficult to understand, watch Bucky's Video](https://www.youtube.com/watch?v=Fcdkcx4achs&list=PLAE85DE8440AA6B83&index=49)


The `this` keyword is a keyword in c++ that stores the memory address of the current object that is being modified in a special pointer. The keyword can be used to display members of distinct classes, since `this` tells the program you are working with "this" object.

```cpp
#include<iostream>

using namespace std;


class Human{

    public:
        Human(int a)
        : age(a)
        {
        }
        void printInfo(){
            cout << age << endl;    //The program assumes you are talking about the current object
            cout << this->age << endl;      //  <---The program is explictily told this object is being used
            cout << (*this).age << endl;    //  <---
        }
    private:
        int age;
};

int main(){

    Human psu(15);
    psu.printInfo1();
    //This method will print out 15 on three seperate lines

}
```

In the first example of the `this` keyword, the program will get "this" object and look for the variable `age` and print it out. In the second example, the pointer `this` is dereferenced using the asterisk. This means that the content of the pointer is retrived(which is "this" object) and then the program will print out the `age` variable that belongs to "this" object.


Create a class called `Tree` which has a private float value called `height`. Then create a method that will print out the value of `height` using the `this` keyword in both ways.
Create an instance of the class and use the method in `main()`


