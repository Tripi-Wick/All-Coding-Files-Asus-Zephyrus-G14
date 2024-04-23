#include <iostream>
using namespace std;

// By Swapping.

void permute(char str[],int l, int h){
    int j;
    if(l==h){
        cout<<str<<endl;
        return;
    }
    else {
        for(j=l; j<=h; j++){
            if(j>l && str[j]==str[l]) continue;
            if(j>l && str[j]==str[j-1]) continue;
            swap(str[l],str[j]);    // TO change {forward track}
            permute(str,l+1,h);
            swap(str[l],str[j]);    // TO undo what was changed {back track}
        } 
    }
}

int main()
{
    int n,i=0;
    cout<<"Enter the length of your sentence : ";
    cin>>n;

    char srr[n];
    cout<<"Enter you sentence : ";
    fflush(stdin);
    gets(srr); 

    for(; srr[i]!='\0'; i++){}      //Used to find the length of the string (not required as n is the length 🤦‍♂️)

    permute(srr,0,i-1);

    return 0;
}


// By State space tree

// void permute(char str[], int k){
//     static bool a[10]={0};
//     static char res[10];

//     if(str[k]=='\0'){
//         res[k]='\0';
//         cout<<res<<endl;
//         return;
//     }
//     else {
//         for(int i=0; str[i]!='\0'; i++){
//         if(a[i]==0){
//             res[k]=str[i];
//             a[i]=1;
//             permute(str,k+1);
//             a[i]=0;
//         }
//         }
//         return;
//     }
// }

// int main()
// {
//     int n,i=0,k=0;
//     cout<<"Enter the length of your sentence : ";
//     cin>>n;

//     char srr[n];
//     cout<<"Enter you sentence : ";
//     fflush(stdin);
//     gets(srr); 

//     for(; srr[i]!='\0'; i++){}      

//     permute(srr,k);

//     return 0;
// }