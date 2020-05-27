 # Class Composition

Composition for Classes is the idea that objects of another class can be put inside a class definition.
For example, if a class called `Graduation` was made to create graduation dates of objects of a `Student` class, then objects of `Graduation` can be put inside the `Student` class.

```cpp
#include<iostream>

using namespace std;


class Graduation{

    public:
        Graduation(int m, int d, int y){
            day = d;
            month = m
            year = y;

        }
        void printGrad(){
            cout << m << "/" << d << "/" << y << endl; 
        };
    private:
        int day;
        int month;
        int year;
}
class Student{

    public:
        Student(string n, Graduation grad)
        : name(n), dateOfGrad(grad)
        {
        }
        void printInfo(){
            cout << name << " will graduate on " << dateOfGrad.printGrad() << endl;
        }
    private:
        string name;
        Graduation dateOfGrad;

}


int main(){

  Graduation juniorGrad(6,25,20);
  Student Steve("Steve", juniorGrad);
  Steve.printInfo();

    // The method from 'Steve' will print "Steve will graduate on 6/25/20"
}


```

Create a class called `DogBreed` which will take an arguement of type string in its constructor. Make the variable that stores the parameter private, like in the `Graduation` class above. Make a method to print out the dog breed variable as well.
Next, create a class called `Dog`, that has two arguements of int `age` and another with the type `DogBreed`
Make a method that will then print out `Dog`'s `age` and `DogBreed`
Finally, create both objects in `main()` and use the method from `Dog` to print out the information of it's object.