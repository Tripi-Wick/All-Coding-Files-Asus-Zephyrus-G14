#include <iostream>
#include <vector>
using namespace std;

int partition_func(vector<int>&vrr, int l, int h){
    int pvt = vrr.at(l);
    int i = l;
    int j = h-1;

//// Using while & For Loop 
    // while(i<j){
    //     for(;i<h && vrr.at(i)<=pvt;i++);
    //     for(;j>=l && vrr.at(j)>pvt;j--);
    //     if(i<j) swap(vrr.at(i),vrr.at(j));
    // }

//// Using do while Loop 
    do{
        do{i++;}while(i<h && vrr.at(i)<=pvt );      //Here we gotta mention the termination condition too else it will run endlessly
        do{j--;}while(j>=l && vrr.at(j)>pvt );
        if(i<j){swap(vrr.at(i),vrr.at(j));}        
    }while(i<j);
    
    swap(vrr.at(l),vrr.at(j));

    return j;
}

void quick_sort(vector<int>&vrr, int l, int h){
    if(l<h){
        int j = partition_func(vrr,l,h);
        quick_sort(vrr,l,j);
        quick_sort(vrr,j+1,h);
    }
}
void quick_sort(vector<int>&vrr){
    int l = 0;
    int h = vrr.size();
    quick_sort(vrr,l,h);
}


int main()
{
    vector<int> vrr;

    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>temp;
        vrr.push_back(temp);
    }

    quick_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}