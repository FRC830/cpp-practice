 # C++ Scope

If this topic is confusing, please watch [Bucky's Video](https://www.youtube.com/watch?v=ZwxMlIS6TLM&list=PLAE85DE8440AA6B83&index=29)

In C++ and other programming languages, there is an idea of "Scope", in which variables can only be accessed based on their definition location.

For example, in this code, 'x' is declared as a Global Variable, where it can be accessed by any function in the code:
```cpp

int x = 10;

int main(){
    cout << x << endl;
}

void printX(){
    cout << x << endl;
}

//Both functions would be able to cout the variable "x" since x was declared globally

```

Another case is that the scope of a variable is only limited to a specific place it was declared, such as within a function. These types of variables are called Local Variables:

```cpp

int main(){

    cout << money << endl;

}

int someFunc(){
    int money = 100;
    cout << money << endl;
}

// The function 'someFunc' would be able to cout the 'money' variable, but the main function wouldn't(It would throw an error).

```

It is also worth noting that in a case where a Global Variable and a Local Variable share the same name and a function is trying to use that variable, it will use the Local one first.
But what if we wanted to call the Global variable first? This is where the Unary Scope Resolution Operator comes in.

The Unary Scope Resolution Operator is an operator symbol (::) placed as a prefix of a Local Variable in order to use the Global Variable. This can also be used if two variables exist with the same name, but different types. For example:

```cpp

double money = 50;

int main(){
    int money = 100;
    cout << ::money << endl;

}

//The following code will cout '50'

```


Make a global float variable and a local integer variable both with the same names and cout the global variable from main()