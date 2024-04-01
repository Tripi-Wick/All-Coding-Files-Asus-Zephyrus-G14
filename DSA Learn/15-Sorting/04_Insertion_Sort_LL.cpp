#include <iostream>
#include <list>
using namespace std;

void insertion_sort(list<int>& l){
    list<int> ::iterator itr1, itr2, prv;
    itr1 = l.begin();
    prv = itr1;
    for(; itr1 != l.end(); itr1++){
        itr2 = l.begin();
        while(itr2!=itr1){
            if(*itr2>*itr1){
                swap(*itr1,*itr2);
            }
            itr2++;
        }
        prv = itr1;
    }

}

int main()
{
    list<int> l;

    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>temp;
        l.push_back(temp);
    }

    list<int> ::iterator itr = l.begin();

    for(; itr!=l.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    insertion_sort(l);
    
    itr = l.begin();

    for(; itr!=l.end(); itr++){
        cout<<*itr<<" ";
    }

    return 0;
}


// In singly linked list we have no choice then to start from the beginning to compare as there is no reverse pointer, but to shorten this process we can take a prv pointer in order to swap with previous data if that's the only swap that has to happen.
