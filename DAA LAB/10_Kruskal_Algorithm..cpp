#include <iostream>
#include <algorithm>
using namespace std;

class Edge
{
public:
    int source;
    int dest;
    int weight;
};

bool comp(Edge e1, Edge e2)
{
    return e1.weight < e2.weight;
}

int findparent(int v, int parent[])
{
    if (parent[v] == v)
    {
        return v;
    }
    findparent(parent[v], parent);
}

void kruskals(Edge input[], int n, int E)
{
    sort(input, input + E, comp);

    Edge output[n - 1];
    int parent[n];

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;

    while (count != n - 1)
    {
        Edge currentedge = input[i];
        int sourceparent = findparent(currentedge.source, parent);
        int destparent = findparent(currentedge.dest, parent);
        
        if (sourceparent != destparent)
        {
            output[count] = currentedge;
            count++;
            parent[sourceparent] = destparent;
        }
        i++;
    }
    cout << "Result is:" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (output[i].source < output[i].dest)
        {
            cout << output[i].source << " " << output[i].dest << " " << output[i].weight << endl;
        }
        else
        {
            cout << output[i].dest << " " << output[i].source << " " << output[i].weight << endl;
        }
    }
}

int main()
{
    int n, E;
    cout << "Enter number of vertices and edges:";
    cin >> n >> E;

    Edge input[E];
    for (int i = 0; i < E; i++)
    {
        cout << "Enter " << i + 1 << " connection:";
        cin >> input[i].source >> input[i].dest >> input[i].weight;
    }
    
    kruskals(input, n, E);
    return 0;
}
