#include <iostream>
using namespace std;

void TOH(int n, char source_Tower, char destination_Tower, char auxilary_Tower){
    if(n==1){
        cout<<"Move disc 1 from "<<source_Tower<<" to "<<destination_Tower<<endl;
    }
    else{
        TOH(n-1,source_Tower,auxilary_Tower,destination_Tower);
        cout<<"Move disc "<<n<<" from "<<source_Tower<<" to "<<destination_Tower<<endl;
        TOH(n-1,auxilary_Tower,destination_Tower,source_Tower);
    }
}
int main()
{
    int n;
    char source_Tower, destination_Tower, auxilary_Tower;

    cout<<"Enter the number of rings For which you want the algorithm : ";
    cin>>n;
    cout<<"Enter the Character of Source Tower : ";
    cin>>source_Tower;
    cout<<"Enter the Character of Destination Tower : ";
    cin>>destination_Tower;
    cout<<"Enter the Character of Auxilary Tower : ";
    cin>>auxilary_Tower;

    TOH(n,source_Tower,destination_Tower,auxilary_Tower);
    
    return 0;
}