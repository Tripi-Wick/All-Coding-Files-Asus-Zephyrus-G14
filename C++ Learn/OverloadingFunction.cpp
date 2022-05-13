#include<iostream>
using namespace std;

int area(int,int);
float area(float);

int main()
{
        int l,b;
        float r;

        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;

        cout<<"Enter radius of circle:";
        cin>>r;

        cout<<"\nArea of rectangle is "<<area(l,b);
        cout<<"\nArea of circle is "<<area(r);
}

int area(int l,int b)
{
    return(l*b);
}
float area(float r)    
{
    return(3.14*r*r);
}

