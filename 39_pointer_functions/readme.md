# Pointer Functions

Pointers add another level of complexity to c++ with functions. There are now 3 kinds:

+ pass by value
+ pass by reference
+ pass by address

[Watch this first](https://www.youtube.com/watch?v=UWYnUGnChhA)

A `pass by value` function `void pass(int val)` passes the *value* of a variable. Any changes to the variable are not repeated, since a copy is made

A `pass by pointer` function `void pass(int *val)` passes the *pointer*  of a variable. So the function will receive the memory address of the variable. 
By deferencing the pointer, you can now change the value of the original variable. You would call this with  `pass(&variable)`

A `pass by reference` function `void pass(int &val)` passes an *"alias"* or *reference* of the variable. This means that it will change the original variable, but you do not need the pointer syntax.

### Problem

Make 3 functions `passByValue` and `passByPointer` and `passByReference` that accept an int and an int reference respectively. Modify the value passed in, e.g. `x=5` or `*y=5`.

Then, output the value of each variable before and afterward.

### Requirements

+ You have 3 seperate variables that are passed into each function
+ The `passByPointer` and `passByReference` variables are changed, but the `passByValue` variable is not

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program