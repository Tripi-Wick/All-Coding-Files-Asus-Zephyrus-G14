#include <iostream>
using namespace std;

struct elems{
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
        friend sparse_Matrix sum(sparse_Matrix,sparse_Matrix);
};
sparse_Matrix ::sparse_Matrix(){
    t_rows = 0;
    t_cols = 0;
    t_elems = 0;
    iterator = 1;
    mat = new elems[t_elems]{};

}
sparse_Matrix ::~sparse_Matrix(){
    delete[]mat;
}
sparse_Matrix ::sparse_Matrix(int a, int b, int c){
    t_rows = a;
    t_cols = b;
    t_elems = c;
    mat = new elems[t_elems]{};
    iterator = 1;
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
            if(mat[k].i==i && mat[k].j==j){
                cout<<mat[k].elem<<" ";
                k++;
            }
            else cout<<"0"<<" ";
        }    
        cout<<endl;
    }
}
int sparse_Matrix ::get_elem(int r, int c){
    int k = 1;
    for(int i=1; i<=t_rows; i++){
        for(int j=1; j<=t_cols; j++){
            if(mat[k].i==r && mat[k].j==c){
                return mat[j].elem;
            }
            k++;
        }    
    }
    return 0;
}
sparse_Matrix sum(sparse_Matrix a ,sparse_Matrix b){
    int p1=1,p2=1;
    sparse_Matrix c;
    c.t_rows = a.t_rows;
    c.t_cols = a.t_cols;
    c.t_elems = a.t_elems + b.t_elems;
    // sparse_Matrix c(a.t_rows,a.t_cols,(a.t_elems+b.t_elems));
    c.mat= new elems[c.t_elems];
    c.iterator=1;
    for(int i=1; i<=c.t_rows; i++){
        for(int j=1; j<=c.t_cols; j++){
            if(a.mat[p1].i < b.mat[p2].i || a.mat[p1].j < b.mat[p2].j){
                c.mat[c.iterator].i=a.mat[p1].i;
                c.mat[c.iterator].j=a.mat[p1].j;
                c.mat[c.iterator].elem=a.mat[p1].elem;
                // c.set_elem(a.mat[p1].i,a.mat[p1].j,a.mat[p1].elem);
                p1++;
                c.iterator++;
            }
            if(a.mat[p1].i > b.mat[p2].i || a.mat[p1].j > b.mat[p2].j){
                c.mat[c.iterator].i=b.mat[p2].i;
                c.mat[c.iterator].j=b.mat[p2].j;
                c.mat[c.iterator].elem=b.mat[p2].elem;
                // c.set_elem(b.mat[p2].i,b.mat[p2].j,b.mat[p2].elem);
                p2++;
                c.iterator++;
            }
            if (a.mat[p1].i == b.mat[p2].i || a.mat[p1].j == b.mat[p2].j){
                c.mat[c.iterator].i=a.mat[p1].i;
                c.mat[c.iterator].j=b.mat[p2].j;
                c.mat[c.iterator].elem=a.mat[p1].elem + b.mat[p2].elem;
                // c.set_elem(a.mat[p1].i,a.mat[p1].j,(a.mat[p1].elem+b.mat[p2].elem));
                p1++;p2++;
                c.iterator++;
            }
        }    
    }
    return c;
}

int main()
{
    int row1,col1,elem1;
    int row2,col2,elem2;
    cout<<"Enter the total number of rows in the sparse matrix 1 : ";
    cin>>row1;
    cout<<"Enter the total number of columns in the sparse matrix 1 : ";
    cin>>col1;
    cout<<"Enter the total number of non-zero elements in the sparse matrix 1 : ";
    cin>>elem1;
    cout<<"Enter the total number of rows in the sparse matrix 2 : ";
    cin>>row2;
    cout<<"Enter the total number of columns in the sparse matrix 2 : ";
    cin>>col2;
    cout<<"Enter the total number of non-zero elements in the sparse matrix 2 : ";
    cin>>elem2;



    
    sparse_Matrix s3;

    sparse_Matrix s1 = sparse_Matrix(row1,col1,elem1);
    sparse_Matrix s2 = sparse_Matrix(row2,col2,elem2);


    for(int i=0; i<elem1; i++){
    int x,y,z;
    cout<<"Enter the row number where this element is present : ";
    cin>>x;
    cout<<"Enter the column number where this element is present : ";
    cin>>y;
    cout<<"Enter the element : ";
    cin>>z;
    s1.set_elem(x,y,z);
    }

    cout<<"                            "<<endl;
    
    for(int i=0; i<elem2; i++){
    int a,b,c;
    cout<<"Enter the row number where this element is present : ";
    cin>>a;
    cout<<"Enter the column number where this element is present : ";
    cin>>b;
    cout<<"Enter the element : ";
    cin>>c;
    s2.set_elem(a,b,c);
    }

    s1.display();
    cout<<"                            "<<endl;

    s2.display();
    cout<<"                            "<<endl;

    s3 = sum(s1,s2);
    s3.display();

    s3.~sparse_Matrix();
    s2.~sparse_Matrix();
    s1.~sparse_Matrix();

    return 0;
}