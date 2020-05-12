#include <iostream>
#include "printarr.h"

using namespace std;

void printArray(int theArray[], int sizeOfArray){

    for(int x = 0;x<sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}

int main(){
    int jim[3] = {20,54,675};
    int jessica[6] = {54,24,7,8,9,99};

    printArray(jim, 3);
    printArray(jessica, 6);
}

