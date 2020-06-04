# String Class and Data Input

The `<string>` class is one of the core classes that are used in c++, as it can be used to create variables of type `string` as well as use functions that pertain to strings. The methods in the class are useful for memorizing(just like it is useful to know `cout` or `endl`), so for the next few tutorials you'll be practicing using methods and members from this class.

One important thing that strings can do is store user input. In the example below, we created a string and stored whatever the user inputs into the terminal first into that string.

```cpp

#include<iostream>
#include<string>
using namespace std;

int main(){

    string userData;
    cin >> userData;
    cout << "The user has input: " << userData << endl;
    // The code about will cout whatever the user inputs
}


```

*However*, there is one thing to note about `cin`. Whenever the data inputed has whitespace, `cin` will cut off data at the first instance of whitespace. For instance, if we inputed the following into the terminal and stored it, `userData` would be able to print all of it out:

```cpp

cin >> userData;
// user inputs "Banana"
cout << userData;
// the code prints "Banana"

```

But if we put in data with *spaces*, then the string will only store the first word:

```cpp

cin >> userData;
// user inputs "Banana Milk Shake"
cout << userData;
// the code only prints "Banana"
```

What if we wanted the *whole* line of input to be stored as a string? That's where `getline()` comes into play. The method `getline()` takes in two parameters, the first being the type of input that will be detected (such as a `cin` function) and the second being the variable that the line of text will be stored.
Using this knowledge, we can successfully store the title of a very tasty drink:

```cpp

string userData;
getline(cin, userData);
// user inputs "Banana Milk Shake"
cout << userData 
// the code will print "Banana Milk Shake"

```

This code also pertains to data in file format such as text files. Therefore, if you're reading the data from a text file and you want to store a line of text into a string, use the `getline()` method.

For your problem, create a method that will ask the user to input their full name and middle inital with spaces and store the whole input in a string. Then, have the program cout the result.

As for all lessons, if you're having trouble:
-(1) Ask a programming buddy
-(2) Run the solution program
-(3) Watch Bucky's video on the topic
-(4) Ask a student leader
-(5) Look at the solution program