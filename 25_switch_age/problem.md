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

Create your own switch statement that will measure an "age" variable and does the following:
 - If age is 14, print out "You are in high school!"
 - If age is 18, print out "You are in college!"
 - If age is 21, print out "You are an adult!"
 - If the age does not meet any of the cases, have it default to "Nothing special happens"
  *Remember to have each case (except default) include a break statement!




