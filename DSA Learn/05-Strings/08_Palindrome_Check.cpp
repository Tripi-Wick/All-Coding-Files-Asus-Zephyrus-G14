#include <iostream>
using namespace std;

int main()
{
    int n,x=0,j=0,i=0;
    cout<<"Enter the number of characters in your string 1 : ";
    cin>>n;

    char str[n];
    char rev[n];

    cout<<"Enter your sentence 1 : ";
    fflush(stdin);
    gets(str);    

    for( ; str[j]!='\0'; j++){}     
    j--;
    
    for( ; str[i]!='\0'; i++, j--){
        rev[i]=str[j];
    }

    rev[i]='\0';  

    for(int i=0; str[i]!='\0', rev[i]!='\0'; i++){
        if(str[i]!=rev[i] || (str[i]=='\0' && rev[i]!='\0') || (str[i]!='\0' && rev[i]=='\0')){
            x = 1;
            break;
        }
    }
             
    if(x==0) cout<<"This string is a palindrome ."<<endl;
    if(x==1) cout<<"This string is not a palindrome ."<<endl;
  
    return 0;
}
