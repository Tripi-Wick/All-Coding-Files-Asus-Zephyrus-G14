#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];
    char gtr[n];

    cout<<"enter your 1st word : ";
    cin>>str;             // or we could have used scanf("%s",str);

    fflush(stdin);
    cout<<"enter your 2nd word : ";
    gets(gtr);

    cout<<"Your 1st word is : "<<str<<endl;                  // or we could have used printf("%s",str);
    cout<<"Your 2nd word is : "<<gtr;                  // or we could have used printf("%s",str);

    return 0;
}