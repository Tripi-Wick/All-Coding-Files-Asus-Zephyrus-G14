#include <iostream>
using namespace std;



int main()
{
    int n1,n2,x=0;
    cout<<"Enter the number of characters in your string 1 : ";
    cin>>n1;
    cout<<"Enter the number of characters in your string 2 : ";
    cin>>n2;

    char str1[n1];
    char str2[n2];

    cout<<"Enter your sentence 1 : ";
    fflush(stdin);
    gets(str1);    

    cout<<"Enter your sentence 2 : ";
    fflush(stdin);
    gets(str2);    

    cout<<"Your sentence 1 is : "<<str1<<endl;     
    cout<<"Your sentence 2 is : "<<str2<<endl;     

    for(int i=0; str1[i]!='\0', str2[i]!='\0'; i++){
        if(str1[i]!=str2[i] || (str1[i]=='\0' && str2[i]!='\0') || (str1[i]!='\0' && str2[i]=='\0')){
            cout<<"Str1 and Str2 are not same."<<endl;
            if(str1[i]<str2[i]){
                cout<<"Str1 precedes of Str2 in dictionary "; 
            }
            else cout<<"Str2 precedes Str1in dictionary "; 
            x = 1;
            break;
        }
    }
             
    if(x==0) cout<<"Str1 and Str2 are same."<<endl;
  
    return 0;
}
