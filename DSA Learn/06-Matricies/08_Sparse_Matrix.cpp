#include <iostream>
using namespace std;

class elems{
    public:
        int i,j,elem;    
};
class sparse_Matrix{
    private:
        int t_rows,t_cols,t_elems,iterator;
        elems* mat;
    public:
        sparse_Matrix();
        sparse_Matrix(int,int,int);
        ~sparse_Matrix();
        void set_elem(int,int,int);
        int get_elem(int,int);
        void display();
};
sparse_Matrix ::sparse_Matrix(){}
sparse_Matrix ::~sparse_Matrix(){
    delete[]mat;
}
sparse_Matrix ::sparse_Matrix(int a, int b, int c){
    t_rows = a;
    t_cols = b;
    t_elems = c;
    mat = new elems[c]{};
    iterator = 0;
}
void sparse_Matrix ::set_elem(int r, int c, int e){
    mat[iterator].i=r;
    mat[iterator].j=c;
    mat[iterator].elem=e;
    iterator++;
}
void sparse_Matrix ::display(){
    int k=1;
    for(int i=1; i<=t_rows; i++){
        for(int j=1; j<=t_cols; j++){
            if(mat[k-1].i==i && mat[k-1].j==j){
                cout<<mat[k-1].elem<<" ";
                k++;
            }
            else cout<<"0"<<" ";
        }    
        cout<<endl;
    }
}
int sparse_Matrix ::get_elem(int r, int c){
    for(int i=1; i<=t_rows; i++){
        for(int j=1; j<=t_cols; j++){
            if(mat[i-1].i==r && mat[j-1].j==c){
                return mat[j-1].elem;
            }
        }    
    }
    return 0;
}

int main()
{
    int rows,cols,elem;
    cout<<"Enter the total number of rows in the sparse matrix : ";
    cin>>rows;
    cout<<"Enter the total number of columns in the sparse matrix : ";
    cin>>cols;
    cout<<"Enter the total number of non-zero elements in the sparse matrix : ";
    cin>>elem;

    sparse_Matrix s1;
    s1 = sparse_Matrix(rows,cols,elem);

    for(int i=0; i<elem; i++){
    int x,y,z;
    cout<<"Enter the row number where this element is present : ";
    cin>>x;
    cout<<"Enter the column number where this element is present : ";
    cin>>y;
    cout<<"Enter the element : ";
    cin>>z;
    s1.set_elem(x,y,z);
    }

    s1.display();

    s1.~sparse_Matrix();
    
    return 0;
}