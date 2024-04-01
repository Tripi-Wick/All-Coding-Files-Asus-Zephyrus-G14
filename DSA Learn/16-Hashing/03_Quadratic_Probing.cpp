#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int hash_func(int key,int hash_table[]){  //----> It takes a key from the key space and gives the index of the element in the hash table
    int idx = key%10;
    if(hash_table[idx]!=int(NULL)){
        int i = 0;
        do{
            idx = idx + pow(i++,2);         // ---->Hash Function h(x) = h(x) + f(x)
            idx = idx%10;
        }while(hash_table[idx]!=int(NULL));   
    }
    return idx;
}

void linear_probing(vector<int>& vrr, int hash_table[]){
    for(unsigned int i=0; i<vrr.size(); i++){
        int idx = hash_func(vrr[i],hash_table);

        hash_table[idx]= vrr[i];
    }
} 

bool search(int hash_table[],int num){
    for(int i=0; i<10; i++){
        if(hash_table[i]==num) return true;     
    }
    return false;
}

void display_hash_table(int hash_table[]){
    for(int i=0; i<10; i++){
        cout<<hash_table[i]<<" ";      
    }
    cout<<endl;
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

    int* hash_table = new int[10]{int(NULL)};
    
    linear_probing(vrr,hash_table);

    display_hash_table(hash_table);
    cout<<endl;

    int num;
    cout<<"Enter the element whose presence you want to check : ";
    cin>>num;

    if(search(hash_table,num) == true) cout<<"YES the element is present in the vector.";    // 1= true, 0 = false
    else cout<<"NO the element is not present in the vector.";

    return 0;
}