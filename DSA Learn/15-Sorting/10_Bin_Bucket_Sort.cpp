#include <iostream>
#include <vector>
using namespace std;
class node{
    public:
        int data;
        node* next;
};

int max_elm(vector<int>vrr){
    int max=vrr[0];
    for(int i=0; i< vrr.size(); i++){
        if(max<vrr.at(i)){
            max = vrr.at(i);
        }
    }
    return max;
}

void bin_sort(vector<int>&vrr){
    int n = max_elm(vrr);

    node** aux_arr = new node*[n+1]{nullptr};
    
    // for (int i=0; i<= n; i++){
    //     aux_arr[i] = nullptr;
    // }

    for(int i=0; i<vrr.size(); i++){
        node* temp = new node;
        temp->data = vrr.at(i);
        temp->next = nullptr;

        node* ptr = aux_arr[vrr.at(i)];

        // if(ptr == nullptr){                       
        //     ptr = temp;                       //--------------------->I dont know why we can't use this.
        // }
        if(aux_arr[vrr.at(i)] == nullptr){
            aux_arr[vrr.at(i)] = temp;
        }
        else{
            while(ptr->next){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    // for(int i=0; i<=n; i++){
    //     // if(aux_arr[i]!=nullptr){
    //         node* ptr = aux_arr[i];
    //         while(ptr!=nullptr){
    //             cout<<ptr->data<<" ";           //---------> Aux Array Test
    //             ptr = ptr->next;
    //         }
    //     // }
    // }
    cout<<endl;

    for(int i=0,j=0; i<=n; i++){
        if(aux_arr[i]!=nullptr){
            node* ptr = aux_arr[i];
            while(ptr!=nullptr){
                vrr[j]=ptr->data;
                j++;
                ptr = ptr->next;
            }
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

    bin_sort(vrr);

    for(int i=0; i<n; i++){
        cout<<vrr.at(i)<<" ";
    }

    return 0;
}