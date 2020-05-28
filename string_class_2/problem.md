# Creating and Copying Strings


As you already know, using the `<string>` class, you can declare a variable off type `string` this way:

```cpp
    string lookAString = "Leaflet";
```

But another way to create a string is the following:

```cpp
    string lookAString("Leaflet");
```

The method above passes in a value to set to a variable called `lookAString`. It's important to know this method exsists in order to not get confused while reading new code.

Another thing that can be done multiple ways is copying strings. Currently, we know that we can copy a string using the following:

```cpp
    string data1 = "Pineapples belong on pizza";
    string data2;
    data2 = data1;
   
```

However, in the string class, we an use a method to copy strings called `assign()`. This method can be accessed using a dot operator from a string and will assign that string with the value of another:

```cpp
    string data1 = "Pineapples belong on pizza";
    string data2;
    data2.assign(data1);
    // data2 now contains the same string characters as data1
```




For your problem, create a string variable with the value "FortyTwo" using the new way seen above. Then create another string variable called `answerToLifeAndEverything` and stores the value of the first string in the second using the `assign()` method from the string class (create the variable wherever, but `assign()` in `main()` ). Cout both strings in `main()`. 