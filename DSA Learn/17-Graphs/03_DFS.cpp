#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int* input_nodes(int num){    
    int* arr = new int[num];
    for(int i=0; i<num; i++){
        cout<<"Enter the "<<i+1<<" node : ";
        cin>>arr[i];
    }

    return arr;
}

void graph_create(int arr[], int**& mat, int n){

    cout<<"IF YES type '0' else '1' "<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){continue;}
            if(mat[arr[j]][arr[i]]==1){mat[arr[i]][arr[j]]=1;}
            else{
                int temp;
                cout<<"Does "<<arr[i]<<" & "<<arr[j]<<" connected : ";
                cin>>temp;
                
                if(temp==1){
                    mat[arr[i]][arr[j]]=1;
                    if(mat[arr[j]][arr[i]]!=1){mat[arr[j]][arr[i]]=1;}
                }
                
            }
        }
    }
}

void graph_print(int** mat, int n){
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<"    "<<i<<" ";
            for(int j=1; j<n; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        cout<<i<<" "<<"{ ";
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
}

void dfs(int** mat,int vis[], int bgn, int n){
    if(vis[bgn]==0){
        cout<<bgn<<" ";
        vis[bgn] = 1;
        for(int i=0; i<n; i++){
            if(mat[bgn][i]==1 && vis[i]==0){
                dfs(mat,vis,i,n);
            }
        }
    }

}

int main()
{
    int num;
    cout<<"Enter the number of nodes : ";
    cin>>num;

    int* arr = input_nodes(num);
    
    int n = *max_element(arr,arr+num);
    n++;

    int** mat = new int*[n]{0};

    for(int i=0; i<n; i++){
        mat[i]= new int[n]{0};
    }

    graph_create(arr,mat,num);

    graph_print(mat,n);

    int elm;
    cout<<"Enter the node from where you want to start dfs : ";
    cin>>elm;

    int vis[n]{0};
    dfs(mat,vis,elm,n);

    return 0;
}
