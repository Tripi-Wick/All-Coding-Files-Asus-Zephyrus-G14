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

void radix_insert(vector<int> vrr, node**& radix_arr, int d){
    for(int i=0; i<vrr.size(); i++){
        int idx;
        int x = d;                          // We gotta take this so that original thing doesn't change
        int num = vrr[i];                   // Same reason

        while(x!=0){
            int q = num/10;
            idx = num%10;
                                                         // cout<<"idx="<<idx<<endl;
            num=q;
            x--;
        }

        node* temp = new node;
        temp->data = vrr.at(i);
        temp->next = nullptr;
                                                          // cout<<"temp,data="<<vrr[i]<<endl;
        node* ptr = radix_arr[idx];

        if(radix_arr[idx] == nullptr){
            radix_arr[idx] = temp;
        }
        else{
            while(ptr->next){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
}
int radix_remove(node**& radix_arr){
    int i=0;
    while(i<10 && radix_arr[i]==nullptr){i++;}
    if(radix_arr[i]){
        node* ptr = radix_arr[i];
        int res = radix_arr[i]->data;
                                                            // cout<<"res="<<res<<endl;
        if(ptr->next){
            radix_arr[i] = ptr->next;
        }
        else radix_arr[i]=nullptr;
        delete ptr;

        return res;
    }
    else return int(NULL);
}
void bin_sort(vector<int>&vrr){
    int n = max_elm(vrr);
    int place=0;
    while(n!=0){
        n = n/10;
        place++; 
                                                            // cout<<"n="<<n<<endl;
                                                            // cout<<"place="<<place<<endl;
    }

    node** radix_arr = new node*[10]{nullptr};

    for(int i=1; i<=place; i++){
        radix_insert(vrr,radix_arr,i);

        for(int j=0; j<vrr.size(); j++){
            vrr[j]=radix_remove(radix_arr);
        }           
    }

    delete[]radix_arr;
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