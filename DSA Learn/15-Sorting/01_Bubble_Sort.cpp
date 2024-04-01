#include <iostream>
#include <vector>
using namespace std;

void bubble_Sort(vector<int>& vrr){
    int i,j,flag;
    for(i = 0; i<vrr.size()-1; i++){
        flag =0;
        for(j = 0; j<vrr.size()-1-i; j++){
            if(vrr.at(j)>vrr.at(j+1)){
                swap(vrr.at(j), vrr.at(j+1));
                flag = 1;
            }
        }
        if(flag==0) break;
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

    bubble_Sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }
    
    return 0;
}