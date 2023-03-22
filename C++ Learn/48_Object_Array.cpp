#include <iostream>
using namespace std;

class Shop{
    private:
        int id;
        float price;
    public:
        void setData(int a, float b){
            id = a;
            price =b;
        }   
        void getData(){
            cout<< "The Code of this item  is " << id<< endl;
            cout<< "The Price of this item is " << price  << endl;
        }
};

int main(){

    int p,size =  2;
    float q;
    Shop *ptr = new Shop [size];
    Shop* ptrTemp = ptr;


    for(int i = 0; i<size; i++){
        cout<<"Enter ID and price of item "<< i+1 << " : " << endl;    
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }


    for(int i = 0; i<size; i++){
        cout<<"ID Number "<< i+1 << " : " << endl;    
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}