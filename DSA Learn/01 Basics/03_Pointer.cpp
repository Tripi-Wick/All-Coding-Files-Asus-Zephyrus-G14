#include <iostream>
using namespace std;

int main()
{
    int a;
    int* ptr;
    ptr = &a;

    *ptr = 13;

    cout<<*ptr<<endl;
    return 0;
}

// Size of Pointer is independent of its variable = 8 byte  (in 64 bit processor)
//                                                = 4 bytes (in 32 bit processor)
//                                                = 2 bytes (in 16 bit processor) 

/*
    int i = 39;
    int *j = &i;

    printf("Value of i %d \n", i);
    printf("Value of i %d \n", *j);
    printf("Value of J %d \n", &(*j));
    printf("Value of J %d \n", j);
    printf("Address of i %u \n", j);
    printf("Address of i %u \n", &(*j));
    printf("Address of i %u \n", &i);
    printf("Address of i %u \n", &i);
    printf("Address of j %u \n", &j);
*/


// Pointer to a structure
//  (*ptr).struct = x;         -----------> *ptr.struct is wrong as . operator has higher precedence so compiler will read it before * operator
//  ptr->struct = x;

