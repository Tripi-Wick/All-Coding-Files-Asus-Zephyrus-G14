#include <stdio.h>
#include <iostream>
using namespace std;

class Matrix{
    protected :
        int* arr ;
        int dim;
};

class diagonal_Matrix : public Matrix{
    public :
        diagonal_Matrix();
        diagonal_Matrix(int);
        void diagonal_set_elem(int,int,int);
        int diagonal_get_elem(int,int);
        void diagonal_display();
};
diagonal_Matrix :: diagonal_Matrix(){}
diagonal_Matrix :: diagonal_Matrix(int dim){
    this->dim = dim;
    arr = new int[dim]{};
}
void diagonal_Matrix ::  diagonal_set_elem(int val ,int i ,int j){
    if(i==j){
        arr[i-1]=val;
    }
    else return;
}
int diagonal_Matrix ::  diagonal_get_elem(int i,int j){
    if(i==j){
        return arr[i-1];
    }
    else return 0;
}
void diagonal_Matrix ::  diagonal_display(){
    for(int i = 1; i<=dim; i++){
        for(int j = 1; j<=dim; j++){
            if(i==j)cout<<arr[j-1]<<" ";
            else cout<<"0"<<" ";
        }
        cout<<endl;
    }
}

class lower_Triangular_Matrix : public Matrix{
    public :
        lower_Triangular_Matrix();
        lower_Triangular_Matrix(int);
        void lower_Triangular_set_elem(int,int,int);
        int lower_Triangular_get_elem(int,int);
        void lower_Triangular_display();
};
lower_Triangular_Matrix :: lower_Triangular_Matrix(){}
lower_Triangular_Matrix :: lower_Triangular_Matrix(int dim){
    this->dim = dim;
    arr = new int[(dim*(dim+1))/2]{};
}
void lower_Triangular_Matrix ::  lower_Triangular_set_elem(int val ,int i ,int j){
    if(i>=j){
        arr[((i*(i-1))/2)+(j-1)]=val;
    }
    else return;    
}
int lower_Triangular_Matrix :: lower_Triangular_get_elem(int i,int j){
    if(i>=j){
        return arr[((i*(i-1))/2)+(j-1)];
    }
    else return 0;  
}
void lower_Triangular_Matrix ::  lower_Triangular_display(){
   for(int i = 1; i <= dim; i++){
        for(int j = 1; j <= dim; j++){
            if(i>=j){
                cout<<arr[((i*(i-1))/2)+(j-1)]<<" ";
            }
            else cout<<"0"<<" ";
        }
        cout<<endl;    
    }
}

class upper_Triangular_Matrix : public Matrix{
    public :
        upper_Triangular_Matrix();
        upper_Triangular_Matrix(int);
        void upper_Triangular_set_elem(int,int,int);
        int upper_Triangular_get_elem(int,int);
        void upper_Triangular_display();
};
upper_Triangular_Matrix :: upper_Triangular_Matrix(){}
upper_Triangular_Matrix :: upper_Triangular_Matrix(int dim){
    this->dim = dim;
    arr = new int [(dim*(dim+1))/2]{};
}
void upper_Triangular_Matrix ::  upper_Triangular_set_elem(int val ,int i ,int j){
    if(i<=j){
        arr[((j*(j-1))/2)+(i-1)]=val;
    }
    else return;    
}
int upper_Triangular_Matrix :: upper_Triangular_get_elem(int i,int j){
    if(i<=j){
        return arr[((j*(j-1))/2)+(i-1)];
    }
    else return 0;  
}
void upper_Triangular_Matrix ::  upper_Triangular_display(){
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


class symmetric_Matrix : public Matrix{
    public :
        symmetric_Matrix();
        symmetric_Matrix(int);
        void symmetric_set_elem(int,int,int);
        int symmetric_get_elem(int,int);
        void symmetric_display();
};
symmetric_Matrix :: symmetric_Matrix(){}
symmetric_Matrix :: symmetric_Matrix(int dim){
    this->dim = dim;
    arr = new int[dim*(dim+1)/2]{};
}
void symmetric_Matrix ::  symmetric_set_elem(int val ,int i ,int j){
    if(i>=j){
        arr[((i*(i-1))/2)+(j-1)]=val;
    }
    else return;       
}
int symmetric_Matrix :: symmetric_get_elem(int i,int j){
    if(i>=j){
        return arr[((i*(i-1))/2)+(j-1)];
    }
    else return 0;  
}
void symmetric_Matrix ::  symmetric_display(){
   for(int i = 1; i <= dim; i++){
        for(int j = 1; j <= dim; j++){
            if(i>=j){
                cout<<arr[((i*(i-1))/2)+(j-1)]<<" ";
            }
            else if(i<=j){
                cout<<arr[((j*(j-1))/2)+(i-1)]<<" ";
            }
        }
        cout<<endl;    
    }
}


class tri_diagonal_Matrix : public Matrix{
    public :
        tri_diagonal_Matrix();
        tri_diagonal_Matrix(int);
        void tri_diagonal_set_elem(int,int,int);
        int tri_diagonal_get_elem(int,int);
        void tri_diagonal_display();
};
tri_diagonal_Matrix :: tri_diagonal_Matrix(){}
tri_diagonal_Matrix :: tri_diagonal_Matrix(int dim){
    this->dim = dim;
    arr=new int[3*dim-2]{};
}
void tri_diagonal_Matrix ::  tri_diagonal_set_elem(int val ,int i ,int j){
    if((i-j) == 1){
        arr[i-1]=val;
    }
    if((i-j) == 0){
        arr[dim-1 + i-1]=val;
    }
    if((i-j) == -1){
        arr[2*dim-1]=val;
    }
    else return;     
}
int tri_diagonal_Matrix :: tri_diagonal_get_elem(int i,int j){
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
void tri_diagonal_Matrix ::  tri_diagonal_display(){
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

class toeplitz_Matrix : public Matrix{
    public :
        toeplitz_Matrix();
        toeplitz_Matrix(int);
        void toeplitz_set_elem(int,int,int);
        int toeplitz_get_elem(int,int);
        void toeplitz_display();
};
toeplitz_Matrix :: toeplitz_Matrix(){}
toeplitz_Matrix :: toeplitz_Matrix(int dim){
    this->dim = dim;
    arr= new int[2*dim-1]{};
}
void toeplitz_Matrix ::  toeplitz_set_elem(int val ,int i ,int j){
    if(i<=j){
        arr[j-i]=val;
    }
    if(i>j){
        arr[dim+i-j-1]=val;
    }
    else return;       
}
int toeplitz_Matrix :: toeplitz_get_elem(int i,int j){
    if(i<=j){
        return arr[j-i];
    }
    if(i>j){
        return arr[dim+i-j-1];
    }
    else return 0;     
}
void toeplitz_Matrix ::  toeplitz_display(){
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
    int mat,dim;
    do{
        printf("------------------------- Enter the type of Matrix you want to work Upon -------------------------\n");
        printf("1. Diagonal Matrix\n");
        printf("2. Lower Triangular Matrix\n");
        printf("3. Upper Triangular Matrix\n");
        printf("4. Symmetric Matrix\n");
        printf("5. Tri-diagonal Matrix\n");
        printf("6. Toeplitz Matrix\n");
        printf("7. Exit this process\n");
        printf("Enter your wish : ");
        scanf("%d",&mat);
        printf("Enter the dimensions of the matrix : ");
        scanf("%d",&dim);
        printf("Your matrix has been created \n");
        switch(mat){
            case 1 : {
                    int choose;
                    diagonal_Matrix m(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1 : {
                            int num,l=1;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.diagonal_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : {
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            cout<<m.diagonal_get_elem(i,j)<<endl;
                        }
                        break;
                        case 3 : {
                            m.diagonal_display();
                        }
                        break;
                    }
                }while(choose!=4);
            }
            break;
            case 2 : {
                    int choose;
                    lower_Triangular_Matrix m;
                    m = lower_Triangular_Matrix(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1 :{ 
                            int l=1,num;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.lower_Triangular_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : 
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            cout<<m.lower_Triangular_get_elem(i,j)<<endl;
                            break;
                        case 3 : 
                            m.lower_Triangular_display();
                            break;
                    }
                }while(choose!=4);
            }
            break;
            case 3 : {
                    int choose;
                    upper_Triangular_Matrix m;
                    m = upper_Triangular_Matrix(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1 : {
                            int l=1,num;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.upper_Triangular_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : {
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            m.upper_Triangular_get_elem(i,j);
                        }
                        break;
                        case 3 : { 
                            m.upper_Triangular_display();
                        }
                        break;
                    }
                }while(choose!=4);
            }break;
            case 4 : {
                    int choose;
                    symmetric_Matrix m;
                    m = symmetric_Matrix(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    
                    switch(choose){
                        case 1 : {
                            int l=1,num;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.symmetric_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : {
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            m.symmetric_get_elem(i,j);
                        }
                        break;
                        case 3 : { 
                            m.symmetric_display();
                        }
                        break;
                    }
                }while(choose!=4);
            }
            break;
            case 5 : {
                    int choose;
                    tri_diagonal_Matrix m;
                    m = tri_diagonal_Matrix(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    
                    switch(choose){
                        case 1 : {
                            int l=1,num;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.tri_diagonal_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : {
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            m.tri_diagonal_get_elem(i,j);
                        }
                        break;
                        case 3 : {
                            m.tri_diagonal_display();
                        }
                        break;
                    }
                }while(choose!=4);
            }
            break;
            case 6 : {
                    int choose;
                    toeplitz_Matrix m;
                    m = toeplitz_Matrix(dim);
                do{
                    printf("---- Choose the the the Option ----\n");
                    printf("1. Set\n");
                    printf("2. Get\n");
                    printf("3. Display\n");
                    printf("4. Exit\n");
                    printf("Enter your wish : ");
                    scanf("%d",&choose);
                    switch(choose){
                        case 1 : {
                            int l=1,num;
                            cout<<"Enter the number of elements you want to enter : ";
                            cin>>num;
                            while(l<=num){
                                int i,j,k;
                                cout<<"Enter the row where you want to insert the element : ";
                                cin>>i;
                                cout<<"Enter the column where you want to insert the element : ";
                                cin>>j;
                                cout<<"Enter the element : ";
                                cin>>k;
                                m.toeplitz_set_elem(k,i,j);
                                l++;
                            }
                        }
                        break;
                        case 2 : {
                            int i,j;
                            cout<<"Enter the row whose element you want to see : ";
                            cin>>i;
                            cout<<"Enter the column whose element you want to see : ";
                            cin>>j;
                            m.toeplitz_get_elem(i,j);
                        }
                        break;
                        case 3 : {
                            m.toeplitz_display();
                        }
                        break;
                    }
                }while(choose!=4);
            }
            break;
        }   
    }while(mat!=7);
    
    return 0;
}