#include <iostream>
#include <stack>
#include <algorithm>
#define Inf INT16_MAX

using namespace std;
int *input_nodes(int num)
{
    int *arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " node : ";
        cin >> arr[i];
    }

    return arr;
}

void graph_create(int arr[], int **&mat, int n, int &edge)
{

    cout << "IF YES type '0' else '1' " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            if (mat[arr[i]][arr[j]] != 0 || mat[arr[i]][arr[j]] != 0)
            {
                continue;
            }
            else
            {
                int temp, cost;
                cout << "Does " << arr[i] << " & " << arr[j] << " connected : ";
                cin >> temp;

                if (temp == 1)
                {
                    edge++;
                    cout << "Enter the cost of going from " << arr[i] << " to " << arr[j] << " : ";
                    cin >> cost;
                    mat[arr[i]][arr[j]] = cost;
                    if (mat[arr[j]][arr[i]] != cost)
                    {
                        mat[arr[j]][arr[i]] = cost;
                    }
                }
            }
        }
    }
}

void graph_print(int **mat, int n, int s)
{
    for (int i = s; i < n; i++)
    {
        if (i == s)
        {
            cout << "    " << i << " ";
            for (int j = s + 1; j < n; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }

        cout << i << " "
             << "{ ";
        for (int j = s; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "}" << endl;
    }
}

void union_set(int *set, int u, int v)
{
    if (set[u] < set[v])
    {
        set[u] = set[u] + set[v];
        set[v] = u;
    }
    else
    {
        set[v] = set[v] + set[u];
        set[v] = set[u];
    }
}

int find_set(int *set, int &u)
{
    int temp = u, v = 0;
    while (set[temp] > 0)
    {
        temp = set[temp];
    }
    while (u != temp)
    {
        v = set[u];
        set[u] = temp;
        u = v;
    }
    return temp;
}
void Kruskal_Algo(int **edge_list, int n, int num, int edge_num)
{
    sort(edge_list,edge_list+edge_num);
    
    int span[1][num - 1]{0};
    int included[edge_num];
    int set[edge_num];
    
    for (int i = 0; i < edge_num+1; i++)
    {
        included[i] = 0;
        set[i] = -1;
    }

    int i = 0;
    while (i < num - 1)
    {
        int u = 0, v = 0, k = 0, min = Inf;

        for (int j = 0; j < edge_num; j++)
        {
            if (included[j] == 0 && edge_list[2][j] < min)
            {
                min = edge_list[2][j];
                u = edge_list[0][j];
                v = edge_list[1][j];
                k = j;
            }
        }

        if (find_set(set, u) != find_set(set, v))
        {
            span[0][i] = u;
            span[1][i] = v;

            union_set(set, find_set(set, u), find_set(set, v));
            i++;
        }
        included[k] = 1;
    }

    for (int i = 0; i < num - 1; i++)
    { // For Printing Path
        cout << "{ " << span[0][i] << " , " << span[1][i] << " }" << endl;
    }
    
}

int main()
{
    int num;
    cout << "Enter the number of nodes : ";
    cin >> num;

    int *arr = input_nodes(num);

    int n = *max_element(arr, arr + num);
    n++;
    int s = *min_element(arr, arr + num);

    int **mat = new int *[n]
    { nullptr };

    for (int i = 0; i < n; i++)
    {
        mat[i] = new int[n]{0};
    }

    int edge_num = 0;
    graph_create(arr, mat, num, edge_num);
    graph_print(mat, n, s);

    edge_num++;

    int **edge_list = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        edge_list[i] = new int[edge_num]{0};
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                break;
            }
            if (mat[i][j] != 0)
            {
                edge_list[0][i] = j;
                edge_list[1][i] = i;
                edge_list[2][i] = mat[i][j];
            }
        }
    }

    Kruskal_Algo(edge_list, n, num, edge_num);

    return 0;
}
