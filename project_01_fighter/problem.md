# Fighter class

This will be your first large project!

The goal of this program is to create a fully functional pokemon-style fighting program.

Create a `Fighter` class.

The fighter class should include the following **private** values:

+ `hp`
+ `damage`
+ `defense`
+ `name`
+ `heal`

Create a default constructor that will initialize `hp`, `damage`, `heal`, and `defense` to zero, and the `name` to `"DEFAULT"`.

In addition, create a constructor that takes in values for `hp`, `damage`, `defense`,`heal` and a `name` and sets them appropriately.

Then, create a main program. Create 2 instances of the fighter class with different names and values.

+ If you feel confident, you can read these values using user input and use the read values to initialize the classes.

Create the following **public** methods on the `Fighter` class:

+ `is_alive` that returns a `boolean` representing if the `hp` is less than or equal to zero.

+ `take_damage`, accepting a double and subtracting that value from its `hp`

+ `get_damage`, returning the amount of damage a fighter can do.

+ `boost_defense`:  either add a constant to the defense value or multiply the defense by a constant. You can pass in this constant as a parameter, or make it a value in the class, such as `defense_boost`.

+ `display_stats`: Output a statement about the current stats of the user. e.g. `My health is 100, my defense is 10.`

+ `heal` *(Not to be confused with the `heal` value)*: Add the `heal` value in the class to the fighters `hp`

 If you want, you can add in some [randomness](http://www.cplusplus.com/reference/cstdlib/rand/).
You can also add additional properties and methods to the fighter as you see fit.


In your main program, you should've initialized the Fighters using either user input or constants.
Now, create a while true loop.

Inside the while loop, ask the *first* user for which action they would like to perform. Read their option from cin into a int variable.

An example menu could include:

```
USER 1:

What would you like to do?
1: Attack
2: Increase Defense
3: Heal
Option > 
```

Use `if`, `elif`, and `else` to perform the appropriate action. For example for attack, you would call `fighterTwo.take_damage(fighterOne.get_damage())` to damage the other users fighter.

Then, check if the fighter is still alive. If it is dead, output that Fighter 1 has won, and break out of the for loop.

Mirror this code but write it for USER 2:

Then, check if the fighter is still alive. If it is dead, output that Fighter 2 has won, and break out of the for loop.

```
while (true)
    // get user selection
    // perform appropriate move
    // check if user 2 is dead
    // get user 2 selection
    // perform appropriate move
    // check if user 1 is dead
```