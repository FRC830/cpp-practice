# Member Initializers

This topic might be confusing. If so, watch [Bucky's Video](https://www.youtube.com/watch?v=53VYYMy-LBo&list=PLAE85DE8440AA6B83&index=45)

A member is essentially anything that is within a class, such as variables. For the `const` variables that you have learned about before, they are required to be initialized using the member syntax within classes. For example:

```cpp
class Human(){

    public:
        Human(int a, int b)
    private:
        int regVar;
        const int constVar;


};

```

The class above would be in a `.h` (header) file. 
In the class `Human`, we're going to set the first argument of the constructor equal to `regVar` and then set the second argument equal to `constVar`. And we are going to do it using Member Intializer syntax.

```cpp

Human::Human(int a, int b)

: regVar(a), constVar(b)  
// This is the member intializer syntax for setting the variables, variableName(variableValue). 
// Notice how the placement is before the body of the class.

{
}
```

Now, we will print out the variables in `main()`. Note: The syntax depicted above is optional for variables that aren't `const`, but required for variables that are `const`.

```cpp

int main(){

    Human monk(20,10);
    cout << monk.a << endl;
    cout << monk.b << endl;
    // The code above will print the regVar as 20 and the const var as 10


}

```


Create a class in a `.h` file called `Circle` and make a private static const float called `radius` and a public constructor with a single float arguement. Also declare a public method that will print out the value of `radius`.
Set `radius` to the argument in the constructor using member initializer syntax in a `.cpp` file and define the method for printing out `radius`.
Lastly, make an instance of `Circle` in a `main.cpp` file and use the method to print out `radius` out that instance.

As for all lessons, if you're having trouble:
-(1) Ask a programming buddy
-(2) Run the solution program
-(3) Watch Bucky's video on the topic
-(4) Ask a student leader
-(5) Look at the solution program