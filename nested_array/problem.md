# Nested Arrays

Nested arrays are the next type of datastructure based on arrays. It is an array that holds arrays. Here is an example:

```cpp
int nested[3][4] = {
    {1,2,3}, // row 0
    {4,5,6}, // row 1
    {7,8,9} // row 2
    {10,11,12} // row 3
}
```

Now nested[0] is `{1,2,3}`, nested[3] is `{10,11,12}` and nested[1][2] is `6`
This can generally be written as `array[row][column]`


### Problem

Print the array with a nested for loop. The outermost loop should be the row variable, and the innermost has the column variable.

```
for row
  for column
    print array[row][column]
```

Bonus:
+ Print it in a format so that it looks nice. After each column variable print a space. After each column for loop print a new line.

```
1 2 3
4 5 6
7 8 9
10 11 12
```