#include <iostream>
using namespace std;

int main()
{
    int n,x=0;
    cout<<"Enter the length of your sentence : ";
    cin>>n;

    char srr[n];
    cout<<"Enter you sentence : ";
    fflush(stdin);
    gets(srr);

    long long int H = 0;
    
    for(int i=0; srr[i]!='\0'; i++){
        if(srr[i]>='A' && srr[i]<='Z'){
            x = 1;
            x = x<<(srr[i]-65); 
            if((H&x)!=0){cout<<srr[i]<<" is repeated"<<endl;}
            H = H | x;
        }
        else if(srr[i]>='a' && srr[i]<='z'){
            x = 1;
            x = x<<(srr[i]-75); 
            if((H&x)!=0){cout<<srr[i]<<" is repeated"<<endl;}
            H = H | x;
        }
    }
    if(x!=1){cout<<"Nothing is Repeated.";}

    return 0;
}

// With whole and sole this method we can't tell the number of time letter is repeated

/*
The process of Checking the bits by using logical AND is known as "Masking".
The process of Toggling the bits by using logical OR is known as "Merging".
*/