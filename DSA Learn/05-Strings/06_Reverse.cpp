#include <iostream>
using namespace std;

// By creating new array 
int main()
{
    static int n,i=0,j=0;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];
    char rev[n];

    cout<<"Enter your string : ";
    fflush(stdin);
    gets(str);    

    cout<<"Your string is : "<<str<<endl;     

    for( ; str[j]!='\0'; j++){}     
    
    cout << j;
    for( ; str[i]!='\0'; i++, j--){
        rev[i]=str[j];
    }

    rev[i]='\0';     

    cout<<"Your string after reversal is : "<<rev<<endl;                
  
    return 0;
}

// By swapping

// int main()
// {
//     int n,i,j;
//     cout<<"Enter the number of characters in your string : ";
//     cin>>n;

//     char str[n];

//     cout<<"Enter your string : ";
//     fflush(stdin);
//     gets(str);    
   

//     cout<<"Your string is : "<<str<<endl;     

//     for(j=0; str[j]!='\0'; j++){}     
//     j--;

//     for(j,i=0; i<j ; i++,j--){
//         swap(str[i],str[j]);
//     }     

//     cout<<"Your string after reversal is : "<<str<<endl;                
  
//     return 0;
// }
