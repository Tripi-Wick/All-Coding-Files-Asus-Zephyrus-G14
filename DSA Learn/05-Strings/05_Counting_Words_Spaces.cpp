#include <iostream>
using namespace std;

int main()
{
    int n,word_count,space_count=0;
    cout<<"Enter the number of characters in your string : ";
    cin>>n;

    char str[n];

    cout<<"Enter your sentence : ";
    fflush(stdin);
    gets(str);    

    cout<<"Your sentence is : "<<str<<endl;     

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i-1]!=' '){
            space_count++;
        }

    }     

    cout<<"Number of space  : "<<space_count<<endl;                
    word_count = space_count + 1;                       // Number of words is == space + word;
    cout<<"Number of words  : "<<word_count<<endl;                
  
    return 0;
}

// Here we gotta ignore white spaces i.e. multiple spaces