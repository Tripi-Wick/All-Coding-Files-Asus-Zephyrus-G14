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

    int hash_Table[52]={0};
    
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            hash_Table[str1[i]-65]++;
        }
        else if(str1[i]>='a' && str1[i]<='z'){
            hash_Table[str1[i]-71]++;
        }
    }  

    for(int i=0; str1[i]!='\0' || str2[i]!='\0'; i++){
        if((str1[i]=='\0' && str2[i]!='\0') || (str1[i]!='\0' && str2[i]=='\0')){
            cout<<"Str1 and Str2 are not of same size hence these are not a Anagram."<<endl;
            x=1;
            break;
            }
    }

    for(int i=0; str2[i]!='\0'; i++){
        if(str2[i]>='A' && str2[i]<='Z'){
        hash_Table[str2[i]-65]--;
        }
        else if(str2[i]>='a' && str2[i]<='z'){
        hash_Table[str2[i]-71]--;
        }
    }

   for(int i=0; i<52; i++){
        if(hash_Table[i]!=0 && x!=1){
            cout<<"Str1 and Str2 are of same length but not Anagram."<<endl;
            x=1;
            break;
        }
    }

    if(x==0)cout<<"Str1 and Str2 are Anagrams";

    return 0;
}
