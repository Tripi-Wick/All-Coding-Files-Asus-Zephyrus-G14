#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of your sentence : ";
    cin>>n;

    char srr[n];
    cout<<"Enter you sentence : ";
    fflush(stdin);
    gets(srr);

    int arr[52]={0};
    
    for(int i=0; srr[i]!='\0'; i++){
        if(srr[i]>='A' && srr[i]<='Z'){
            arr[srr[i]-65]++;
        }
        else if(srr[i]>='a' && srr[i]<='z'){
            arr[srr[i]-71]++;
        }
    }

    for(int i=0; i<52; i++){
       if(arr[i]!=0 && arr[i]!=1){
            if(i<=25){
            cout<<"the alphabet '"<<char(i+65)<<"' has been repeated : "<<arr[i]<<" times"<<endl;
            }
            if(i>25){
            cout<<"the alphabet '"<<char(i+71)<<"' has been repeated : "<<arr[i]<<" times"<<endl;
            }
       }
    }

    return 0;
}

/*
As A = 65 and Z = 90, a = 97 and z = 122 
So A-65 = 0  till Z = 25;
AND now a = 97, so a-97+26 == a-71=26  till  z= 51  
*/