# Class Inheritance



Inheritance is the concept of a class "inheriting" things from another class. This allows a new class to have the functions and variables from an old class. In the example below, the derived class `Child` will inherit from a base class called `Parent`





```cpp

class Parent{

    public:
        Parent(){}
        void sayPheno(){
            cout << "I am double jointed" << endl;
        }
};

class Child: public Parent {        // <---- Use a colon with an accesser keyword and class name to inherit

     public:
        Child(){}

};

int main(){

    Parent father;
    father.sayPheno();
    Child daughter;
    daughter.sayPheno();

    //Both objects will call the method
}
```

### Problem

- Create a base class called `Quadralateral`
- Give it a public int variable called `numOfSides` and set it.
- Create another class called `Square` that will derive from `Quadraleteral`. (Use the colon with public)
- Create a method on the `Quadraleteral` class  that prints the number of sides
- Initialize an instance of the `Quadraleteral` class and call the method from `main`
- Create a method on the `Quadraleteral` class  that prints the number of sides **as well as a statement such as 'Called from square' or 'I have all right angles.'**
- Initialize an instance of the `Square` class and call the method from `main`