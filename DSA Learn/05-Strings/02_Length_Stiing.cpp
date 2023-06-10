#include <iostream>
using namespace std;


// BY ME
// int main()
// {
//     int n,length=0;
//     cout<<"Enter the number of characters in your string : ";
//     cin>>n;

//     char str[n];

//     cout<<"enter your 1st word : ";
//     cin>>str;    

//     for(int i=0; i<n; i++){
//         if(str[i]<='\0'){length++;}
//     }         

//     cout<<"Your 1st word is : "<<str<<endl;     
//     cout<<"Its Length is : "<<length;           
  
//     return 0;
// }


// Better Version
int main()
{
    int n,i;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];

    cout<<"Enter your word : ";
    cin>>str;    

    for(i=0; str[i]!='\0'; i++){}         

    cout<<"Your word is : "<<str<<endl;     
    cout<<"Its Length is : "<<i;           
  
    return 0;
}