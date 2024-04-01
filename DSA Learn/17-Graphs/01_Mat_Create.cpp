// creating a symmetric matrix
#include <iostream>
using namespace std;

void graph_create(int arr[], int**& mat, int n){

    for(int i=0; i<n; i++){
        mat[i]= new int[n]{0};
    }

    cout<<"IF YES type '0' else '1' "<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){continue;}
            if(mat[j][i]==1){mat[i][j]=1;}
            else{
                int temp;
                cout<<"Does "<<arr[i]<<" & "<<arr[j]<<" connected : ";
                cin>>temp;
                
                if(temp==1){
                    mat[i][j]=1;
                    if(mat[j][i]!=1){mat[j][i]=1;}
                }
                
            }
        }
    }
}

void graph_print(int arr[], int** mat, int n){
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<"    "<<arr[i]<<" ";
            for(int j=1; j<n; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        cout<<arr[i]<<" ";
        cout<<"{ ";
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    
    int** mat = new int*[n]{0};

    int arr[n];

    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter the node : ";
        cin>>arr[i];
    }

    graph_create(arr,mat,n);

    graph_print(arr,mat,n);


    return 0;
}