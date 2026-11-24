
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;

// DFS Function
void DFS(int vertex)
{
    visited[vertex] = 1;

    cout << vertex << " ";

    for(int neighbor : graph[vertex])
    {
        if(!visited[neighbor])
        {
            DFS(neighbor);
        }
    }
}

int main()
{
    int n, e, u, v, start;

    cout << "Enter number of vertices: ";
    cin >> n;

    graph.resize(n);
    visited.resize(n, 0);

    cout << "Enter number of edges: ";
    cin >> e;

    // Input graph edges
    for(int i = 0; i < e; i++)
    {
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";

    DFS(start);

    return 0;
}
