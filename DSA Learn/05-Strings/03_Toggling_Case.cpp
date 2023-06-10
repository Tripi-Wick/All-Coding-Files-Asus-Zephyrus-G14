#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];

    cout<<"Enter your word : ";
    cin>>str;    

    cout<<"Your word is : "<<str<<endl;     

    for(i=0; str[i]!='\0'; i++){
        if(str[i]>=65 && str[i]<=90){
            str[i] = str[i] + 32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }     

    cout<<"Your word after changing case is : "<<str<<endl;                
  
    return 0;
}


/*
	A-65, a-97 ------> 97 - 65 = 32 
	B-66, b-98 ------> 98 - 66 = 32 
	C-67, c-99 ------> 99 - 67 = 32 
Hence we can change case by adding 32 to the given character to change to lower case and vice versa.
*/