# Classes in seperate files

We are now going to move the Taco class to a seperate file. This one is pretty complex, so make sure you understand what is going on. [Buckys video](https://www.youtube.com/watch?v=NTip15BHVZ)

- Create a header file, `Taco.h` and the "body" of the class, `Taco.cpp`.
- Include the c++ file in your main program (`#include "FILENAME.cpp"`)
- Include the header file in `Taco.cpp` as well as `iostream`.
- Add the constructor to the `cpp` file, making sure to add the correct namespace before it. (Hint `CLASSNAME::`)
- The constructor should output `crunchy` or some other message.
- In the header, create the `Taco` class, and a `"stub"` for the constructor. This means you write the function name, but don't fill anything in or add braces..
- In your main function, create an instance of the `Taco` class
- In the header, add this code at the beginning:

```
#ifndef TACO_H
#define TACO_H
```

and this code at the end:

```
#endif
```

Read about what that code does [here](https://www.educative.io/edpresso/what-are--sharpifndef-and--sharpdefine-used-for-in-cpp)

### Requirements

- When the taco class is created in main, it outputs a message.
- The taco class is in 2 seperate files other than main.