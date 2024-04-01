#include <iostream>
#include <vector>
using namespace std;

int hash_func(int key,int hash_table[]){  //----> It takes a key from the key space and gives the index of the element in the hash table
    int idx = key%10;
    int loop_ter = idx;
    if(hash_table[idx]!=int(NULL)){
        do{
            idx = (idx + 1)%10;          // ---->Hash Function h(x) = h(x) + f(x)
        }while(idx!=loop_ter && hash_table[idx]!=int(NULL));   
    }
    else return idx;
    
    if(idx==loop_ter){
        cout<<"Error: Hash Table is FULL";
        abort();
    }
    else return idx;
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