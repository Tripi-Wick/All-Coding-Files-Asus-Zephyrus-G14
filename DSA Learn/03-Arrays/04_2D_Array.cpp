#include <iostream>
using namespace std;

int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    int* b[3];
    b[0] = new int[4];
    b[1] = new int[4];
    b[2] = new int[4];
    
    int**c;
    c = new int*[3];
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter the element of "<<j<<" row and "<<i<<" column : ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"The element of "<<j<<" row and "<<i<<" column is : "<<a[i][j]<<endl;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter the element of "<<j<<" row and "<<i<<" column : ";
            cin>>b[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"The element of "<<j<<" row and "<<i<<" column is : "<<b[i][j]<<endl;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter the element of "<<j<<" row and "<<i<<" column : ";
            cin>>c[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"The element of "<<j<<" row and "<<i<<" column is : "<<c[i][j]<<endl;
        }
    }

    return 0;
}