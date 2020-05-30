# Erasing Strings

The first method that we'll be covering today is the `erase()` method. This method will erase the contents of a string completely starting from the inputed index as an argument:


```cpp
int main(){

    string stuff("Here is my list of achievements. The first goes like this...");
    cout << stuff << endl;
    stuff.erase(32);    // The character at the inputed index will also be erased
    cout << stuff << endl;
    //The first cout will print the whole string, while the second cout will only print the first sentance.
}
```

The second method is the `replace()` method. This method will replace a part of the string at a starting index with a different string:

```cpp
int main(){

    // The replace() method takes in the following: replace(starting_index,numberOfCharsAftertoBeReplaced, replacingString)
    string stuff("Here is my list of achievements. The first goes like this...");
    cout << stuff << endl;
    stuff.replace(19,12,"stories");
    cout << stuff << endl;
}
```

As shown above, the method `replace()` starts at the starting index(first argument), erases the number of characters after it to be replaced(second argument), and replaces them with the inputed string (third argument)

The final method is `insert()`. This method will insert a string into another string without taking anything out like `replace()`. The parameters required are the starting index of the inserted string and the inserted string itself:

```cpp
int main(){

    string stuff("Here is my list of achievements. The first goes like this...");
    cout << stuff << endl;
    stuff.insert(19,"really cool ");
    cout << stuff << endl;
    //Will cout "Here is my list of really cool achievements."
}
```


The problem today will involve the string below:

```cpp

string testInfo("My name is Steve and I like money.");

```

Edit the string to replace the name of the person, and insert the string `"to make "` in order to end the string with `"I like to make money."`. `cout` the newly modified string in `main()`.