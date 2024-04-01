// Kindly find out ki lon sa sort hai ye 

#include <iostream>
#include <list>
using namespace std;

void insertion_sort(list<int>& l){
    list<int> ::iterator itr1, itr2;
    itr1 = l.begin();

    for(; itr1 != l.end(); itr1++){
        for(itr2 = itr1; itr2 != l.end(); itr2++){
            if(*itr1 > *itr2){
                swap(*itr1,*itr2);
            }
        }
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
