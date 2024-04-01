#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> vrr){
    int i,j,k;
    
    for(i=0;i<vrr.size();i++){
        for(j=k=i;j<vrr.size();j++){
            // if(vrr.at(j)<vrr.at(i) && vrr.at(j)<vrr.at(k)){
            //     k=j;
            // }
            if(vrr.at(j)<vrr.at(k)){    //THis is sufficient too
                k=j;
            }
        }
        swap(vrr.at(i),vrr.at(k));       
        // swap(&vrr[i],&vrr[k]);        //See if we dont use appersent above then we can use it here too
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

    selection_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }
    return 0;
}