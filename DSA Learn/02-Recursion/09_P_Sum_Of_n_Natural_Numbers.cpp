#include <iostream>
using namespace std;

int natural_sum(int n){
    static int sum = 0,num =1;
    if(n>0){
        sum = sum + num;
        num++;
        natural_sum(n-1);
    }
    else return sum;

}

int main()
{
    int n;
    cout<<"Enter the number of natural number whose sum you wanna see : ";
    cin>>n;

    cout<<"Sum = "<<natural_sum(n);

    return 0;
}



// More Better Approach :
/*
int sum(int n){
    if(n==0){
        return 0;
    }
    else return natural_sum(n-1)+n
}
*/

//  More More Better Approach :
/*
int sum(int n){
   return (n*(n+1))/2;
}
*/