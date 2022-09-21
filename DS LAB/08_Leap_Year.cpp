#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year whom you want to check for leap year: ";
    cin>>year;

    if(year%400==0){
        cout<<"Entered year is a leap year.";
    }
    else if(year%100==0 && year%400!=0){
        cout<<"Entered year is not a leap year.";
    }
    else if(year%4==0){
        cout<<"Entered year is a leap year.";
    }
    else{cout<<"Entered year is not a leap year";
    }

    return 0;
}