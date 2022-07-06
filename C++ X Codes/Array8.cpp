#include<iostream>
using namespace std;
 
int main()
{
    int mat[3][3], trans_mat[3][3];
 
    /* Initializing Mat1 and Mat2 */
    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];	
        }
    }
 
    /* Transposing elements of the matrix */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans_mat[j][i] = mat[i][j];	
        }
    }
 
    cout << "Transpose of the Given 3x3 Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << trans_mat[i][j] << "\t";	
        }
        cout << endl;
    }
}  