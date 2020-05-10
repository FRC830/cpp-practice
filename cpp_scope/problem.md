 # C++ Scope

If this topic is confusing, please watch [Bucky's Video](https://www.youtube.com/watch?v=ZwxMlIS6TLM&list=PLAE85DE8440AA6B83&index=29)

In C++ and other programming languages, there is an idea of "Scope", in which variables can only be accessed based on their definition location.

For example:
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