#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void chaining(vector<int>& vrr, node**& hash_table){
    for(unsigned int i=0; i<vrr.size(); i++){
        int num = vrr[i];
        int idx = num%10;

        node* temp = new node;
        temp->data =  vrr[i];
        temp->next = nullptr;

        node* ptr = hash_table[idx];
        if(!ptr){
            hash_table[idx] = temp;
        }
        else{
            while(ptr->next){
                ptr= ptr->next;
            }
            ptr->next = temp;
        }
    }
} 

bool search(node** hash_table,int num){
    for(int i=0; i<10; i++){
        node* ptr = hash_table[i];
        while(ptr){
            if(ptr->data == num) return true;
            ptr = ptr->next;
        }       
    }
    return false;
}

void display_hash_table(node** hash_table){
      for(int i=0; i<10; i++){
        node* ptr = hash_table[i];
        if(ptr){
            while(ptr){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            } 
        }
        else cout<<"_ ";       
    }
}

void delete_hash_elem(node** hash_table,int num){
    for(int i=0; i<10; i++){
        node *prv=nullptr, *ptr = hash_table[i];
        while(ptr){
            if(ptr->data == num){
                if(prv)
                    prv->next = ptr->next;
                else    
                    hash_table[i] = nullptr;
                delete ptr;
                break;
            }
            else{
                prv = ptr;
                ptr = ptr->next;
            }
        }       
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

    node** hash_table = new node*[10]{nullptr};
    
    chaining(vrr,hash_table);

    display_hash_table(hash_table);
    cout<<endl;

    int num;
    cout<<"Enter the element whose presence you want to check : ";
    cin>>num;

    if(search(hash_table,num) == true) cout<<"YES the element is present in the vector.";    // 1= true, 0 = false
    else cout<<"NO the element is not present in the vector.";

    cout<<endl;
    cout<<"Enter the element which you want to delete : ";
    cin>>num;

    delete_hash_elem(hash_table,num);

    display_hash_table(hash_table);
    cout<<endl;

    return 0;
}