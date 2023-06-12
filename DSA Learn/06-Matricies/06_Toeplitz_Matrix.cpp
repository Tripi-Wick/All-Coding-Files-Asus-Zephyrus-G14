// This is row major lower triangular matrix 

#include <iostream>
using namespace std;

class toeplitz_matrix{
    private:
        int* arr;
        int dim;
    public:
        toeplitz_matrix();
        toeplitz_matrix(int);
        ~toeplitz_matrix();
        void set_element(int,int,int);
        int get_element(int,int);
        void display();
};

toeplitz_matrix :: toeplitz_matrix(){}

toeplitz_matrix :: toeplitz_matrix(int size){
    this->dim = size;
    arr = new int[2*size-1];
}

toeplitz_matrix :: ~toeplitz_matrix(){
    delete[]arr;
}

void toeplitz_matrix ::set_element(int elem, int i, int j){
    if(i<=j){
        arr[j-i]=elem;
    }
    if(i>j){
        arr[dim+i-j-1]=elem;
    }
    else return;        
}

int toeplitz_matrix :: get_element(int i, int j){
    if(i<=j){
        return arr[j-i];
    }
    if(i>j){
        return arr[dim+i-j-1];
    }
    else return 0;        
}

void toeplitz_matrix :: display(){
    for(int i = 1; i <= dim; i++){
        for(int j = 1; j <= dim; j++){
            if(i<=j){
                cout<<arr[j-i]<<" ";
            }
            else if(i>j){
                cout<<arr[dim+i-j-1]<<" ";
            }
            else cout<<"0"<<" ";      
        }
        cout<<endl;    
    }
}

int main()
{
    int size,n,i,j,k;
    cout<<"Enter the dimensions of you matrix : ";
    cin>>size;

    n = 2*size-1;

    toeplitz_matrix m1;
    m1 = toeplitz_matrix(size);

    cout<<"Plz enter serial wise"<<endl;

    for(int l=0; l<n; l++){
        cout<<"Enter the row where you want to insert the element : ";
        cin>>i;
        cout<<"Enter the column where you want to insert the element : ";
        cin>>j;
        cout<<"Enter the element : ";
        cin>>k;
        m1.set_element(k,i,j);
    }
    
    m1.display();

    return 0;
} 