#include <iostream>
using namespace std;

int main()
{
//  // Re Visiting Pointer

    int a = 89 ;
    int* ptr;
    *ptr = a;              // or ptr = &a 
    cout <<" The value at pointer ptr is :" << *(ptr) << endl;
 
//  // Dynamic Memory Allocation

    // Single
    int* dynamicMemory = new int(69);
    cout <<" The value at pointer ptr is : "<< *(dynamicMemory) <<endl;

    // Array
    int* dynamicArray = new int[4];
    dynamicArray[0] = 1;
    *(dynamicArray + 1)  = 2;                           //----------------------> IF you ull put it to next line it will not work cause it ADDS main address of DynamicArray.
    dynamicArray[2] = 3;
    dynamicArray[3] = 4;
    cout <<" The value of array at location 1 is : "<< dynamicArray[0] <<endl;
    cout <<" The value of array at location 2 is : "<< dynamicArray[1] <<endl;
    cout <<" The value of array at location 3 is : "<< dynamicArray[2] <<endl;
    cout <<" The value of array at location 4 is : "<< dynamicArray[3] <<endl;

    delete dynamicArray;        //--------------->Used to free the memory

    return 0;
}