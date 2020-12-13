# Arrow Member Selection Operator

If this topic is confusing, here's [Bucky's Video](https://www.youtube.com/watch?v=2RP4f9beidc&list=PLAE85DE8440AA6B83&index=42)


Before when we needed to access things in classes we would use a "." operator. For example:


```cpp
class Human {
    Human();
    void sayGreeting(){
        cout << "Hello World!" << endl;
    }
};

int main(){

    Human Steve;
    Steve.sayGreeting();
}
```

But what if we are using a pointer? The Arrow Member Selection Operator (->) is the way to achieve that.
If we store an object's memory address inside a pointer and try to run methods from that pointer using a "." operator, we are going to run into an error. Instead, we need to use the AMSO to use anything from within the pointer of the class:

```cpp


class Human {
    Human();
    void sayGreeting(){
        cout << "Hello World!" << endl;
    }
};
int main(){


    Human Steve;
    Human *stevePtr = &Steve;

    stevePtr->sayGreeting();

    //The code above is accessing the method from the class using a pointer.

}



```

Create a program that makes a Cat class with the method `meowNow` that will cout a string containing `"Meow!"`
Then, create an instance of the class and store its memory address in a pointer and access the method `meowNow` from the pointer in `main()`.

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program
