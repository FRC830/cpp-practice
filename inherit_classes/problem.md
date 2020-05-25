# Class Inheritance



Inheritance is the concept of a class "inheriting" things from another class. This allows a new class to have the functions and variables from an old class. In the example below, the derived class `Child` will inherit from a base class called `Parent`





```cpp

class Parent{

    public:
        Parent()
        {
        }
        void sayPheno(){
            cout << "I am double jointed" << endl;
        }
};

class Child: public Parent{        // <---- Use a colon with an accesser keyword and class name to inherit

     public:   
        Child()
        {
        }

};

int main(){

    Parent father;
    father.sayPheno();
    Child daughter;
    daughter.sayPheno();

    //Both objects will call the method
}


```

Create a base class called `Quadralateral` and make it have a public int variable called `numOfSides` equal to 4. Then, create another class called `Square` that will derive from `Quadraleteral`. Give `Square` a public bool variable called `allRightAngles` and set it to true. 
Make a method that will print the `numberOfSides` of a `Square` and say that it also has four right angles(use a conditonal for this part). 
Print the numbers of sides of a `Quadraleteral` and use the method from `Square` in `int main()`