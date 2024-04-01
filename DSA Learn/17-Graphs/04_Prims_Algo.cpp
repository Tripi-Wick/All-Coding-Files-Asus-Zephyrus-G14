#include <iostream>
#include <stack>
#include <algorithm>
#define Inf INT16_MAX

using namespace std;
int* input_nodes(int num){    
    int* arr = new int[num];
    for(int i=0; i<num; i++){
        cout<<"Enter the "<<i+1<<" node : ";
        cin>>arr[i];
    }

    return arr;
}

void graph_create(int arr[], int**& mat, int n, int s){

    cout<<"IF YES type '0' else '1' "<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){continue;}
            if(mat[arr[i]][arr[j]]!=Inf || mat[arr[i]][arr[j]]!=Inf){continue;}
            else{
                int temp,cost;
                cout<<"Does "<<arr[i]<<" & "<<arr[j]<<" connected : ";
                cin>>temp;
                
                if(temp==1){
                    cout<<"Enter the cost of going from "<<arr[i]<<" to "<<arr[j]<<" : ";
                    cin>>cost;
                    mat[arr[i]][arr[j]]=cost;
                    if(mat[arr[j]][arr[i]]!=cost){mat[arr[j]][arr[i]]=cost;}
                }  
            }
        }
    }
}

void graph_print(int** mat, int n, int s){
    for(int i=s; i<n; i++){
        if(i==s){
            cout<<"    "<<i<<" ";
            for(int j=s+1; j<n; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        cout<<i<<" "<<"{ ";
        for(int j=s; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
}

void prim_Algo(int**mat, int n, int num, int s){
    int u=0,v=0,min = Inf;
    // int near[n]{Inf};             //This doest allocates i dont know why and i m literal fucked up now i cant back track with my mind
    int near[n];             // Keeps track of next near vertex
    for(int i=0;i<n;i++){
        near[i]=Inf;
    }

    int span[1][num-1]{0};            // Keeps the track of path

    for(int i=s; i<n; i++){            // To find first minimum cost vertices
        for(int j=s; j<n; j++){
            if(i==j){break;}
            else{
                if(min>mat[i][j]){
                    min= mat[i][j];
                    u=i;
                    v=j;
                }
            }
        }
    }


    span[0][0] = u;
    span[1][0] = v;
    near[u] = near[v] = 0;

    for(int i=s; i<n; i++){                 // Filling the next near vertex to all
        if(near[i]!=0){
            if(mat[i][u]<mat[i][v]){
                near[i]=u;
            }
            else{
                near[i]=v;
            }
        }
    }

    for(int l=1; l<num-1; l++){               //now the repeating loop begins.
        int k=0;
        min = Inf;
        for(int i=s; i<n; i++){                 // Filling the next near vertex to all
            if(near[i]!=0 && min>mat[i][near[i]]){
                k=i;
                min = mat[i][near[i]];
            }
        }
        
        span[0][l]= k;
        span[1][l]= near[k];
        near[k]=0;

        for(int i=s; i<n; i++){                    // Refilling near
            if(near[i]!=0 && (mat[i][k]<mat[i][near[i]])){
                near[i]=k;
            }
        }
    }
    
    // cout<<span[1][0]<<" -> "<<span[0][0]<<" -> ";
    // for(int i=1; i<num-1; i++){                                            // For Printing Path -just for visualization else not correct representation of the tree. 
    //     if(span[0][i]!=span[0][i-1] && span[0][i]!=span[1][i-1]){
    //         cout<<span[0][i]<<" -> ";
    //     }
    //     else{
    //         cout<<span[1][i]<<" -> ";
    //     }
    // }
    // cout<<"end";

    for(int i=0; i<num-1; i++){                             // For Printing Path
        cout<<"{ "<<span[0][i]<<" , "<<span[1][i]<<" }"<<endl;
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
    int s = *min_element(arr,arr+num);

    int** mat = new int*[n]{nullptr};

    // mat[i]= new int[n]{Inf};           //THis too doesn't work i dont know why
    for(int i=0; i<n; i++){
        mat[i]= new int[n];         
        for(int j=0; j<n; j++){
            mat[i][j]=Inf;
        }
    }

    graph_create(arr,mat,num,s);

    graph_print(mat,n,s);

    // int elm;
    // cout<<"Enter the node from where you want to start : ";
    // cin>>elm;

    prim_Algo(mat,n,num,s);
    
    return 0;
}
