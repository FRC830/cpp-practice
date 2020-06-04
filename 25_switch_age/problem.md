# Switch Age

[Buckys Video](https://www.youtube.com/watch?v=o78khWdmqIE&list=PLAE85DE8440AA6B83&index=26)


Switch statements are used in some cases to replace if statements.

It can get very tedious to write many if statements. For example:

    ```cpp
    int age = 16;
    if(age == 8){
        cout << "You are a kid!" << endl;
    }
    if(age == 13){
        cout << "You are a teenager!" << endl;
    }
    if(age == 16){
        cout << "You are a young adult!" << endl;
    }
    ```

However, a switch statement can shorten the number of lines that need to be written:

    ```cpp
    int age = 16;
    switch(age){
        case 8:
            cout << "You are a kid!" << endl;
            break;
        case 13:
            cout << "You are a teenager!" << endl;
            break;
        case 16:
            cout << "You are a young adult!" << endl;
            break;
    }
    ```

It is also worth mentioning that there exsists a case for a variable that doesn't fit anywhere in a switch statement. This case is called `default` and it is the "default" case that will be evaluated when the inputed varible doesn't meet any other cases:

    ```cpp
    default:
        cout << "Nothing special happens!" << endl;
    

    //There is no break statement because the default case is the last case evaluated, so there is no need to break the switch.
    ```

Create your own switch statement that will measure an "age" variable and does the following:
 - If age is 14, print out "You are in high school!"
 - If age is 18, print out "You are in college!"
 - If age is 21, print out "You are an adult!"
 - If the age does not meet any of the cases, have it default to "Nothing special happens"
  *Remember to have each case (except default) include a break statement!

As for all lessons, if you're having trouble:
-(1) Ask a programming buddy
-(2) Run the solution program
-(3) Watch Bucky's video on the topic
-(4) Ask a student leader
-(5) Look at the solution program