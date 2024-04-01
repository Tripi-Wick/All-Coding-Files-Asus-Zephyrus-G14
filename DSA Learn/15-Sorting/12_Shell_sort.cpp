#include <iostream>
#include <vector>
using namespace std;

void shell_sort(vector<int>& vrr){
    int pass = vrr.size()/2;

    while(pass!=0){
        for(int i=pass; i<vrr.size(); i+=pass){
            int curr = i;
            int prv = i - pass;
            while(prv>=0 && vrr[prv]>vrr[curr]){
                swap(vrr[prv],vrr[curr]);
                curr = prv;
                prv = curr - pass;
            }
        }
        pass = pass/2;
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

    shell_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}