
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n, e, u, v, start;

    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n);
    vector<int> visited(n, 0);

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

    queue<int> q;

    // BFS Traversal
    visited[start] = 1;
    q.push(start);

    cout << "BFS Traversal: ";

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for(int neighbor : graph[current])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }

    return 0;
}
