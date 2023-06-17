#include <iostream>
using namespace std;

class elems_sparse_Matrix{
    public:
        int row;
        int col;
        int elem;
};

class info_sparse_Matrix{
    private :
        // struct elems_sparse_Matrix{
        // int row;
        // int col;
        // int elem;
        // };
        int t_rows;
        int t_cols;
        int t_elems;
        elems_sparse_Matrix* mat_beg,*itr,*mat_end;
    public :
        info_sparse_Matrix(int,int,int);
        ~info_sparse_Matrix();
        void set_elem(int,int,int);
        void display();
        info_sparse_Matrix sum(info_sparse_Matrix&,info_sparse_Matrix&);
};
info_sparse_Matrix ::~info_sparse_Matrix(){
    delete[]mat_end;
    delete mat_beg;
    delete itr;
}
info_sparse_Matrix ::info_sparse_Matrix(int a,int b,int c){
    t_rows = a;
    t_cols = b;
    t_elems = c;
    mat_end = new elems_sparse_Matrix[t_elems]{};
    mat_beg = mat_end;
    itr = mat_beg;
}
void info_sparse_Matrix ::set_elem(int r,int c,int e){
   mat_end->row=r;
   mat_end->col=c;
   mat_end->elem=e;
   mat_end++;
}
void info_sparse_Matrix :: display(){
        for(int i = 1; i<=t_rows; i++){
            for(int j = 1; j<=t_cols; j++){
                if(itr->row==i && itr->col == j){
                    cout<<itr->elem<<" ";
                    itr++;
                }
                else cout<<"0 ";
        }
        cout<<endl;
    }
    itr = mat_beg;
}

info_sparse_Matrix info_sparse_Matrix ::sum(info_sparse_Matrix& a,info_sparse_Matrix& b){
    info_sparse_Matrix* res = new info_sparse_Matrix(a.t_rows,a.t_cols,(a.t_elems+b.t_elems));

    while(a.itr<a.mat_end && b.itr<b.mat_end){
        if(a.itr->row < b.itr->row){
                res->mat_end= a.itr;
                a.itr++;
                res->mat_end++;
        }
        else if (a.itr->row > b.itr->row){
                res->mat_end = b.itr;
                b.itr++;
                res->mat_end++;
        }
        else{
            if (a.itr->col < b.itr->col){
                res->mat_end= a.itr;
                a.itr++;
                res->mat_end++;
            }
            else if (a.itr->col > b.itr->col){
                res->mat_end = b.itr;
                b.itr++;
                res->mat_end++;
            }
            else {
                res->mat_end->row = b.itr->row;
                res->mat_end->col = b.itr->col;
                res->mat_end->elem = a.itr->elem + b.itr->elem;
                a.itr++;
                b.itr++;
                res->mat_end++;
            }   
        } 
    }
    while(a.itr<a.mat_end){
        res->mat_end=a.itr;
        a.itr++;
        res->mat_end++;
    }
    while(b.itr<b.mat_end){
        res->mat_end=b.itr;
        b.itr++;
        res->mat_end++;
    }
   
    a.itr=a.mat_beg;
    b.itr=b.mat_beg;
    res->itr=res->mat_beg;
    
    return *res;
}


int main()
{
    int row, col, elem1, elem2;
    cout<<"Enter the total number of rows in the sparse matrix  : ";
    cin>>row;
    cout<<"Enter the total number of columns in the sparse matrix  : ";
    cin>>col;
    cout<<"Enter the total number of non-zero elements in the sparse matrix 1 : ";
    cin>>elem1;
    cout<<"Enter the total number of non-zero elements in the sparse matrix 2 : ";
    cin>>elem2;

    info_sparse_Matrix s1(row,col,elem1);
    info_sparse_Matrix s2(row,col,elem2);
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
    int x,y,z;
    cout<<"Enter the row number where this element is present : ";
    cin>>x;
    cout<<"Enter the column number where this element is present : ";
    cin>>y;
    cout<<"Enter the element : ";
    cin>>z;
    s2.set_elem(x,y,z);
    }

    s1.display();
    cout<<"                            "<<endl;

    s2.display();
    cout<<"                            "<<endl;

    info_sparse_Matrix s3 = s3.sum(s1,s2);

    s3.display();
    cout<<"                            "<<endl;
    
    return 0;
}