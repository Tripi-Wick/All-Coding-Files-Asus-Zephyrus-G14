#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
    printf("Enter the value of %d element of array : ", i+1);
    scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++){
    printf("The value of %d element array : %d\n",i+1, arr[i]);
    }

    // // Another way to write for loop {Named "for each loop" "Enhanced Loop" or Range Based For loop""}.
    // // for(variable : range/array ){
    // // for (int x : {1,2,3,4}){
    // for(int x : arr){
    // printf("The value of %d element array : %d\n",x+1, x);
    // cout<<x<<endl;
    // }

    return 0;
}

//  Ø Padding of Structure :
// 
//      struct area{
// 	          int x;
// 	          char  y;
// 	   };

// Here in this the size of the structure should be 5 bytes (4 of integer and 1 of character) but instead it is 8 bytes (4 of int and 4 of char). To simplify its work compiler just allocates the nearest possible highest memory to all variables in a structure or class. This adjustment of memory done by a compiler is known as "Padding of Structures". 


