#include <iostream>
using namespace std;

void swapp1(int x, int y){              /// Function of Call by value 
    int temp = x ;
    x = y;
    y = temp;
}

void swapp2(int* x, int* y){              /// Function of Call by Address
    int temp = *x ;
    *x = *y;
    *y = temp;
}

void swapp3(int& x, int& y){              /// Function of Call by Reference
    int temp = x ;
    x = y;
    y = temp;
}

int main()
{
    int a = 1, b = 2;
    cout<<"a = "<<a<<"    "<<"b  = "<<b<<endl;

    cout<<"******** Call By Value ********"<<endl;
    swapp1(a,b);
    cout<<"a = "<<a<<"    "<<"b  = "<<b<<endl;

    cout<<"******** Call By Address ********"<<endl;
    swapp2(&a,&b);
    cout<<"a = "<<a<<"    "<<"b  = "<<b<<endl;

    cout<<"******** Call By Reference "<<endl;
    swapp3(a,b);
    cout<<"a = "<<a<<"    "<<"b  = "<<b<<endl;

    return 0;
}


/*
Call by Value : -
	• Directly Passing the Value to the function.
	• Any change done to formal parameters will not affect the actual parameters.
	• Mainly Used When a function returns something.
	
Call by Address : -
	• It uses pointers to pass the value to a function.
	• Any change done to formal parameters will affect the actual parameters.
	• Mainly used when to change value of actual parameters

Call by Reference : -
	•  In this just the name of actual Parameters is changed.
	• Any change done to formal parameters will affect the actual parameters.
	• Mainly used when memory is a necessity as it does not create new variable, it just uses those variables with a changed name only.
	• It is able to access the variables of main as it is the member of main function in this example.
	• Basically it is possible using inline functions.
	• Call by reference must be used carefully with heavy functions.
*/