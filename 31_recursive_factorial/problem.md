# Recursive Factorial

Recursion is one of the hardest topics to grasp conceptually. You can think about it this way:


I'm sitting in a movie theater, and I don't know what row I'm in. So I ask the guy in front of me what row he is in, and decide that whatever row he is in, I am 1 row behind him.  The guy doesn't know his row, so he asks the dude in front of him. This goes on until we reach someone in the front row, who knows that they are in row 1. At this point, all the information is passed back in order, i.e. The dude in front tells the man in the second row and so on until it reaches us with the correct row number.

In code this is represented with a function that does 2 things:

1) A stop condition (The first row in the movie theater)
2) A recursive call (Adding one to the result of the dude in front)

This example is, of course, useless because we know what row we are in with the int parameter.

```cpp
int whatRowAmI(int row) {
    if (row == 1) {
        return 1; // stop condition
    } else {
        return 1 + whatRowAmI(row - 1); // recursive call
    }
}
```

### Problem

+ Create a recursive function that returns the factorial of a number `x`
+ Then call the function with a number from user input and print it out

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program