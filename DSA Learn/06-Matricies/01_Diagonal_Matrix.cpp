#include <iostream>
using namespace std;

class Scaling_Matrix{
    private:
        int* a;
        int size,length;
    public:
        Scaling_Matrix();
        Scaling_Matrix(int);
        void display();
        void set(int,int,int); 
        int get(int,int,int); 
};
Scaling_Matrix :: Scaling_Matrix(){
}

Scaling_Matrix :: Scaling_Matrix(int n){
    size = n;
    a = new int[n]{};
    length = 0;
}

void Scaling_Matrix :: set(int val,int i, int j){
    if(i==j){
        a[i]=val;
        if(i>length) length = i ;
    }
    else return;
}

int Scaling_Matrix :: get(int val,int i, int j){
    if(i==j){
        return a[i];
    }
    else return 0;
}

void Scaling_Matrix :: display(){
    for(int i = 0; i<length; i++){
        for(int j = 0; j<length; j++){
            if(i==j)cout<<a[j]<<" ";
            else cout<<"0"<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    
    int size,n,i,j,k;
    cout<<"Enter the size of you matrix : ";
    cin>>size;

    Scaling_Matrix m1;
    m1 = Scaling_Matrix(size);

    cout<<"Enter the number of elements you want to set : ";
    cin>>n;

    for(int l=0; l<n; l++){
        cout<<"Enter the row where you want to insert the element : ";
        cin>>i;
        cout<<"Enter the column where you want to insert the element : ";
        cin>>j;
        cout<<"Enter the element : ";
        cin>>k;
        m1.set(k,i,j);
    }

    m1.display();
    
    return 0;
}