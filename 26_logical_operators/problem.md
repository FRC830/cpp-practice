# Logical Operators

[Buckys Video](https://www.youtube.com/watch?v=o78khWdmqIE&list=PLAE85DE8440AA6B83&index=26)
[Other Logical Operators in C++](https://www.w3schools.com/cpp/cpp_operators_logical.asp)


Logical Operators are tools used to make comparisons between two variables much simpler than if statements. 

Let's say we wanted to see if a person could drive depending on their age and wehther or not they had a drivers license. 

    ```cpp
    int age = 18;
    bool license = true;
    if(age > 16){
        if(license == true){
            cout << "I can drive!" << endl;
        }
    }

    ```

Two of the most used Logical Operators are these:
- The AND operator: &&
- The OR operator: ||

The AND operator will test to see if two conditions are met. We can use this operator to shorten our code.

    ```cpp
    int age = 20;
    bool license = true;
    if(age > 18 && license == true){
        cout << "I can drive!" << endl;
    }

    // The code above will print out "I can drive!"
    ```

The OR operator will test to see one or both of two conditions are met. For example:

    ```cpp

    bool choresExist = true;
    bool isRaining = false;
    if(choresExist || isRaining) //Booleans can be tested without a == operator
    {
        cout << "This is just the Human Condition" << endl;
    }

    // The program will print out the statement because one of the conditions (choresExist) is true.
    
    ```


Create code in `main()` that will test to see if a person is under the age of 18 and can play an instrument. If this is true, have it cout "I am a student".

As for all lessons, if you're having trouble:
- (1) Ask a programming buddy
- (2) Run the solution program
- (3) Watch Bucky's video on the topic
- (4) Ask a student leader
- (5) Look at the solution program