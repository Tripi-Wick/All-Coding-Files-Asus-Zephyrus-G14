// This is column major upper triangular matrix

#include <iostream>
using namespace std;

class upper_Triangular_Matrix{
    private:
        int* arr;
        int dim;
    public:
        upper_Triangular_Matrix();
        upper_Triangular_Matrix(int);
        ~upper_Triangular_Matrix();
        void set_element(int,int,int);
        int get_element(int,int);
        void display();
};

upper_Triangular_Matrix :: upper_Triangular_Matrix(){}

upper_Triangular_Matrix :: upper_Triangular_Matrix(int dim){
    this->dim = dim;
    arr = new int[(dim*(dim+1))/2];
}

upper_Triangular_Matrix :: ~upper_Triangular_Matrix(){
    delete[]arr;
}

void upper_Triangular_Matrix ::set_element(int elem, int i, int j){
    if(i<=j){
        arr[((j*(j-1))/2)+(i-1)]=elem;
    }
    else return;        
}

int upper_Triangular_Matrix :: get_element(int i, int j){
    if(i<=j){
        return arr[((j*(j-1))/2)+(i-1)];
    }
    else return 0;        
}

void upper_Triangular_Matrix :: display(){
    for(int i = 1; i <= dim; i++){
        for(int j = 1; j <=dim ; j++){
            if(i<=j){
                cout<<arr[((j*(j-1))/2)+(i-1)]<<" ";
            }
            else cout<<"0"<<" ";
        }
        cout<<endl;    
    }
}
int main()
{
    int size,n,i,j,k;
    cout<<"Enter the dimensions of your matrix : ";
    cin>>size;

    upper_Triangular_Matrix m1;
    m1 = upper_Triangular_Matrix(size);

    n = (size*(size+1))/2;

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