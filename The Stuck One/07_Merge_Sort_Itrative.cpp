#include <iostream>
#include <vector>
using namespace std;

void merge_func(vector<int>&vrr, int l, int m, int h){
    int i = l, j = m+1;
    vector<int> aux;
    while(i<=m && j<=h){
        if(vrr.at(i)<vrr.at(j)){
            aux.push_back(vrr.at(i));
            i++;
        }
        else{
            aux.push_back(vrr.at(j));
            j++;
        }
    }
    while(i<=m){
        aux.push_back(vrr.at(i));
        i++;
    }
    while(j<=h){
        aux.push_back(vrr.at(j));
        j++;
    }
    for(int i=l,j=0; i<=h; i++,j++){
        vrr.at(i)=aux.at(j);
    }
}

void merge_sort(vector<int>&vrr){
    int p, n = vrr.size();
    
    for(p=2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i+=p){
            int l = i;
            int h = i+p-1;
            int m = (l+h)/2;
            merge_func(vrr,l,m,h);
        }        
    }
    if(p/2<n){
        merge_func(vrr,0,(p/2)-1,n-1);
    }
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

    merge_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}