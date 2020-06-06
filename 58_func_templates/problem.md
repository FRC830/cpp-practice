# Function Templates

Let's say you want to make a function that will add two numbers together to make a calculator program. First you'd make the function for adding two integers together.

```cpp
int addInts(int x, int y){ 
    return x + y;
}
```

Hold on, if we need to add two numbers together, we would also need to add two floats and doubles and all the other data types. This would require alot of function overloading, when there is a simpler solution.
First, a `template` definition is required, which will create a generic type of data:

```cpp
template <class number>
```

Then, rewrite the function from before, but instead of passing in two `int` variables, pass in two `number` variables:

```cpp
template <class number>

number addNumbers(number x, number y){
    return x + y;
}
```

This function is called a function template. Essentially, we're using a generic type of data called `number` as a template and it allows us to pass in multiple types of variables in the function.

For your problem, create a funciton that will return the square (x ^ 2) of any numerical type. Create a `template` type to be passed in to the function.
Use your function in `main()` and `cout` the result for two different datatypes.

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program