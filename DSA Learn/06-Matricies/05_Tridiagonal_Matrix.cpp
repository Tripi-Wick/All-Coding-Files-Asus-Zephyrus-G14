// This is row major lower triangular matrix 

#include <iostream>
using namespace std;

class tri_diagonal_matrix{
    private:
        int* arr;
        int dim;
    public:
        tri_diagonal_matrix();
        tri_diagonal_matrix(int);
        ~tri_diagonal_matrix();
        void set_element(int,int,int);
        int get_element(int,int);
        void display();
};

tri_diagonal_matrix :: tri_diagonal_matrix(){}

tri_diagonal_matrix :: tri_diagonal_matrix(int size){
    this->dim = size;
    arr = new int[3*size-2]{};
}

tri_diagonal_matrix :: ~tri_diagonal_matrix(){
    delete[]arr;
}

void tri_diagonal_matrix ::set_element(int elem, int i, int j){
    if((i-j) == 1){
        arr[i-1]=elem;
    }
    if((i-j) == 0){
        arr[dim-1 + i-1]=elem;
    }
    if((i-j) == -1){
        arr[2*dim-1]=elem;
    }
    else return;        
}

int tri_diagonal_matrix :: get_element(int i, int j){
    if((i-j) == 1){
        return arr[i-1];
    }
    if((i-j) == 0){
        return arr[dim-1 + i-1];
    }
    if((i-j) == -1){
        return arr[2*dim-1];
    }   
    else return 0;   
}

void tri_diagonal_matrix :: display(){
    for(int i = 1; i <= dim; i++){
        for(int j = 1; j <= dim; j++){
            if((i-j) == 1){
                cout<<arr[i-1]<<" ";
            }
            else if((i-j) == 0){
                cout<<arr[dim-1 + i-1]<<" ";
            }
            else if((i-j) == -1){
                cout<<arr[2*dim-1]<<" ";
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

    n = 3*size-2;

    tri_diagonal_matrix m1;
    m1 = tri_diagonal_matrix(size);

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