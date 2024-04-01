#include <iostream>
#include <vector>
using namespace std;

int max_elm(vector<int>vrr){
    int max=vrr[0];
    for(int i=0; i< vrr.size(); i++){
        if(max<vrr.at(i)){
            max = vrr.at(i);
        }
    }
    return max;
}
void count_sort(vector<int>&vrr){
    int n = max_elm(vrr);
    int* aux_arr = new int[n+1]{0};
    
    for(int i=0; i<vrr.size(); i++){
        aux_arr[vrr.at(i)]++;
    }
    // for(int i=0; i<=max_elm(vrr); i++){
    //     cout<<aux_arr[i]<<" ";           //---------> Aux Array Test
    // }
    cout<<endl;

    for(int i=0,j=0; i<=n; i++){
        while(aux_arr[i]!=0){
            vrr[j++]=i;
            aux_arr[i]--;
        }
    }

    delete[]aux_arr;
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

    count_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}