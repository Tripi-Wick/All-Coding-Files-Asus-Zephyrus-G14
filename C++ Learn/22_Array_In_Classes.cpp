#include <iostream>
using namespace std;

class shop{
    int item_ID[100];
    int item_Price[100];
    int counter;
    
    public:
        void initial_Counter(void){
            counter=0;
        }
        void set_Price(void);
        void display_Price(void);
};

void shop :: set_Price(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>item_ID[counter];
    cout<<"Enter Price of your item"<<counter+1<<endl;
    cin>>item_Price[counter];
    counter++;
}

void shop :: display_Price(void){
    for(int i=0; i<counter;i++){
        cout<<"The Price of item with Id "<<item_ID[i]<<" is "<<item_Price[i]<<endl;
    }
}


int main()
{
    shop mall;
    mall.initial_Counter();
    mall.set_Price();
    mall.set_Price();
    mall.set_Price();
    mall.display_Price();
    return 0;
}


// In classes memory is not allocated when an variable is declared. It is allocated when object is declared.
// But when a function is declared in the class memory is allocated at the same time.