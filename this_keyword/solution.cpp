#include<iostream>


using namespace std;

class Tree{

    public:
        Tree(float h)
        : height(h)
        {
        }

        void printHeight(){
            cout << this->height << endl;
            cout << (*this).height << endl;
        }
    private:
        float height;


};



int main(){

    Tree oak(4.5);
    oak.printHeight();

}