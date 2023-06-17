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
        elems_sparse_Matrix *mat;
    public :
        ~info_sparse_Matrix(){
            delete [] mat;
        }
        info_sparse_Matrix(int m,int n,int num){
            t_rows = m;
            t_cols = n;
            t_elems = num;
            mat = new elems_sparse_Matrix[t_elems];
        }
        // void set_elem(){
        //     cout<<"------------: Enter the non Zero elements :------------"<<endl;
        //     cout<<"Row Column Element "<<endl;
        //     for(int i=1; i<=t_elems; i++){
        //         cin>>mat[i].row>>mat[i].col>>mat[i].elem;
        //     }
        // }
        // void display(){
        //     int k=1;
        //     for(int i = 1; i<=t_rows; i++){
        //         for(int j = 1; j<=t_cols; j++){
        //             if(mat[k].row==i && mat[k].col == j){
        //             cout<<mat[k++].elem<<" "; 
        //             }
        //             else cout<<"0 ";
        //         }
        //         cout<<endl;
        //     }
        // }
        friend istream & operator>>(istream &is, info_sparse_Matrix &s);
        friend ostream & operator<<(ostream &os, info_sparse_Matrix &s);
        info_sparse_Matrix operator+(info_sparse_Matrix &s);
        // info_sparse_Matrix sum(info_sparse_Matrix&,info_sparse_Matrix&){}
};

// By operator Overloading
istream & operator>>(istream &is, info_sparse_Matrix &s){
    cout<<"------------: Enter the non Zero elements :------------"<<endl;
    cout<<"Row Column Element "<<endl;
    for(int i=0; i<s.t_elems; i++){
        cin>>s.mat[i].row>>s.mat[i].col>>s.mat[i].elem;
    }
}
ostream & operator<<(ostream &os, info_sparse_Matrix &s){
    int k=0;
    for(int i = 0; i<s.t_rows; i++){
        for(int j = 0; j<s.t_cols; j++){
            if(s.mat[k].row==i && s.mat[k].col == j){
            cout<<s.mat[k++].elem<<" "; 
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

info_sparse_Matrix info_sparse_Matrix ::operator+(info_sparse_Matrix &s){
    int i,j,k;
    if(t_rows != s.t_rows || t_cols != s.t_cols ){ return info_sparse_Matrix(0,0,0);}
    info_sparse_Matrix* sum = new info_sparse_Matrix(t_rows,t_cols,t_elems+s.t_elems);
    i=j=k=0;
    while(i<t_elems && j<s.t_elems){
        if(mat[i].row<s.mat[j].row){
            sum->mat[k++]=mat[i++];
        }
        else if(mat[i].row>s.mat[j].row){
            sum->mat[k++]=s.mat[j++];
        }
        else{
            if(mat[i].col<s.mat[j].col){
                sum->mat[k++]=mat[i++];
            }
            else if(mat[i].col>s.mat[j].col){
                sum->mat[k++]=s.mat[j++];
            }
            else{
                sum->mat[k] = mat[i];
                sum->mat[k++].elem = mat[i++].elem + s.mat[j++].elem;
            }
        }
    }
    for(;i<t_elems;i++){sum->mat[k++]=mat[i];}
    for(;j<s.t_elems;j++){sum->mat[k++]=s.mat[j];}
    sum->t_elems=k;
    return *sum;
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

    // s1.set_elem();
    // s2.set_elem();
    // s1.display();
    // s2.display();

// By operator Overloading

    cin>>s1;
    cin>>s2;
    
    info_sparse_Matrix sum =  s1 + s2;

    cout<<"The first Matrix : "<<endl<<s1;
    cout<<"The second Matrix : "<<endl<<s2;
    cout<<"The sum Matrix : "<<endl<<sum;

    return 0;
}