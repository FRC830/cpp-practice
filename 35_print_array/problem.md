# Print an array

This program is a little different, because we will start using the `header`, `cpp` pattern.

Create a header file that includes **just** the function signature. Example `test.h` would look like:

```cpp
void func(int val);
```

Then, include the header `test.h`. Pop quiz: do you use `"` or `<>` to include it?


### Problem

Create a function `printArray` that accepts an int array and the size of the array, and using a for loop prints out every value.

### Requirements

+ A header and cpp file are present
+ A for loop prints out the array
+ The cpp file has the same name as the header, e.g. `test.cpp`