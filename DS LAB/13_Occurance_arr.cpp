#include <iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter the numbers of elements in array: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
    }

    int n,count=0,pos;
    cout<<"Type the element whose concurrance you want to find: ";
    cin>>n;

    for(int i=0; i<a; i++){
        if(arr[i]==n){count++;}
    }
   
    for(int i=0; i<a; i++){
        if(arr[i]==n){
            pos=i;
            break;}
        // else {cout<<"Error: NO SUCH NUMBER EXISTS IN THIS ARRAY";}
    }

    cout<<"'"<<n<<"' has occurred "<<count<<" times in the given array."<<endl;
    cout<<"At very First '"<<n<<"' occurred at "<<pos<<" index in the given array" ;

    return 0;
}