#include <iostream>
#include "printarr.h"

using namespace std;

void printArray(int theArray[], int sizeOfArray){

    for(int x = 0;x<sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}

int main(){
    int arr1[3] = {20,54,675};
    int arr2[6] = {54,24,7,8,9,99};
    cout << "Array 1:\n";
    printArray(arr1, 3);
    cout << "Array 2:\n";
    printArray(arr2, 6);
}

