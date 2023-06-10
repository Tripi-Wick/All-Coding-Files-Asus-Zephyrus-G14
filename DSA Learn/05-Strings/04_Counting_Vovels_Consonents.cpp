#include <iostream>
using namespace std;

int main()
{
    int n,v_count=0,c_count=0;;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];

    cout<<"Enter your sentence : ";
    fflush(stdin);
    gets(str);    

    cout<<"Your sentence is : "<<str<<endl;     

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
           v_count++;
        }
        else if(str[i]>='A' && str[i]<='Z'||(str[i]>=90 && str[i]<=122)){
            c_count++;
        }

    }     

    cout<<"Number of vowels  : "<<v_count<<endl;                
    cout<<"Number of consonants  : "<<c_count<<endl;                
              
    return 0;
}