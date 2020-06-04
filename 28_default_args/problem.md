# Default Arguments

So far when creating a function, you've had to define the parameters and then input arguments when the function is called.
By using default values, we can make a function return something by default without inputing any arguments.

To set the default values in a function, simply set the argument equal to a value in the function declaration, then define what the function does later in the code.

```cpp
int area(int l = 1, int w = 1);
int main(){

    cout << area();

}
int area(int l, int w){
    return l*w
}


//The above code will cout "1"
```

Create a function called "circle_area" that will default to calculating a circle with a radius of 1. Call the function in `main()`
*For this function, substitute pi as 3.14

As for all lessons, if you're having trouble:
-(1) Ask a programming buddy
-(2) Run the solution program
-(3) Watch Bucky's video on the topic
-(4) Ask a student leader
-(5) Look at the solution program