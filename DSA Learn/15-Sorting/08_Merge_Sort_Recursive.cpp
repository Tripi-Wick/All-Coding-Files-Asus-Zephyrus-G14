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

void merge_sort(vector<int>&vrr,int l, int h){
    if(l<h){
        int m = (l+h)/2;    
        merge_sort(vrr,l,m);
        merge_sort(vrr,m+1,h);
        merge_func(vrr,l,m,h);
    }
}
void merge_sort(vector<int>&vrr){
    int l = 0;
    int h = vrr.size()-1;
    merge_sort(vrr,l,h);
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