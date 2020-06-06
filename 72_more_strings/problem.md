# Substrings, Swapping and Finding

A substring is a smaller string with sections of a larger string. We can use the `substr()` function to choose a "slice" of the string:

```cpp
string testStr("All of the elements in the universe are Earth, Water, Fire, and Air");
string smallerStr;

int main(){
    smallerStr.substr(7,12); 
    cout << smallerStr << endl;
    // Will print out "the elements"
}
```
For `substr()`, the first parameter is the staring index and the second is how many characters after will be contained in the substring.

The next method that we'll be learning is the `swap()` method. This method will swap the contents of two strings. The arugment needed is self-explanatory:

```cpp
string cropOne("Pears ");
string cropTwo("LoanableTurnips ") 

int main(){

    cout << cropOne << cropTwo << endl;
    cropOne.swap(cropTwo);
    cout << cropOne << cropTwo << endl; 
}
```

The last method that we'll be learning is the `find()` method. This method will find the first index in which an inputed string will occur within a string. The method begins its search from the left and end at the right, and returns the first index of the inputed string:

```cpp
string animals("Cat Dog Horse Pig Dog");
int main(){

    cout << animals.find("Dog");
    // The method will return 4, since it's the first occurance of "Dog"
}
```
but what if we want to find the last occurance of `"Dog"`? The method `rfind()` will return the first occurance of the inputed string starting from the right:

```cpp
string animals("Cat Dog Horse Pig Dog");
int main(){

    cout << animals.rfind("Dog");
    // The method will return 18, since it's the last occurance of "Dog"
}
```

For this lesson's problem, use the following string definition:
```cpp

string fruits("Apple Peach Grapes Grapes Apple Tomatoes");

```
First, create a string variable and store a substring that will contain the first **five** words of `fruits`. Then cout the first occurance of Grapes using the `find()` method from the string class and the cout the last occurance of Apple using the `rfind()` method.

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program