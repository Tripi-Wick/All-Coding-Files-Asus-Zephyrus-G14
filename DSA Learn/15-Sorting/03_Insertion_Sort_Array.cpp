#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& vrr){
    for(int i=1; i<vrr.size(); i++){
        int x =vrr.at(i);
        int j = i-1;
        while(j>-1 && vrr[j]>x){
            swap(vrr.at(j),vrr.at(j+1));
            j--;
        }
        vrr.at(j+1)=x;
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

    insertion_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}