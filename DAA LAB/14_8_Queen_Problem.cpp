#include <bits/stdc++.h>
using namespace std;
int countt = 0;
void print(int board[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}
bool isValid(int board[][4], int row, int col)
{

    for (int i = col; i >= 0; i--)
    {
        if (board[row][i])
            return false;
    }
    int i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j])
            return false;
        i--;
        j--;
    }
    i = row;
    j = col;

    while (i < 4 && j >= 0)
    {
        if (board[i][j])
            return false;
        i++;
        j--;
    }
    return true;
}

void ninjaQueens(int board[][4], int currentColumn)
{
    if (currentColumn >= 4)
        return;

    for (int i = 0; i < 4; i++)
    {
        if (isValid(board, i, currentColumn))
        {
            board[i][currentColumn] = 1;
            if (currentColumn == 3)
            {
                print(board);
                countt++;
            }

            ninjaQueens(board, currentColumn + 1);

            board[i][currentColumn] = 0;
        }
    }
}
int main()
{

    int board[4][4] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};
    ninjaQueens(board, 0);

    cout << countt << endl;
    return 0;
}
