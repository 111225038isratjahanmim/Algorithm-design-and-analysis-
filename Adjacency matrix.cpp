
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, e, u, v;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    vector<vector<int>> matrix(n, vector<int>(n, 0));
    vector<vector<int>> adjList(n);

    // Input edges
    for(int i = 0; i < e; i++)
    {
        cout << "Enter edge (u v): ";
        cin >> u >> v;

        matrix[u][v] = 1;
        matrix[v][u] = 1;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // Display Adjacency Matrix
    cout << "\nAdjacency Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    // Display Adjacency List
    cout << "\nAdjacency List:\n";

    for(int i = 0; i < n; i++)
    {
        cout << i << ": ";

        for(int v : adjList[i])
            cout << v << " -> ";

        cout << "NULL" << endl;
    }

    return 0;
}
