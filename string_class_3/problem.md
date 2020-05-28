# Interpreting strings as arrays 

So far, we've been treating strings as if they were a *complete* variable. However, the definition of a `string` is, essentially, an array of characters. Basically, anything that you can do to an array, you can do to a string:

```cpp
string animal("Zebra");

int main(){
    cout << animal[2];
    // Prints out "b"; array indexes always start at 0
}
```

Antoher way we can `cout` indexes of strings is by using the `at()` method from the string class. This method functions the same way as the index operator, as it will retrive the chracter at the index:

```cpp
string bird("Woodpecker");

int main(){
    bird.at(5);
    // Prints out the letter at index 5
}
```

Since strings are just arrays of characters, they are also iterable like normal arrays. In order to get the size of a string, use the `length()` method from the string class demonstrated in the example below:

```cpp
string sentence("I don't like candy");

int main(){
    for(int i = 0; i < senctance.length() - 2; i++){
        cout << sentence.at(i);
    }
    // prints "I don't like can"
}
```

Create a function that takes the input of a string and prints half of it. Use a for loop as well as the length of the string in order to print half of it. 
Test your function in `main()` with a string