#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<int> adj[], vector<int> &vis)
{
    queue<int> q;

    q.push(start);
    vis[start] = 1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int x : adj[node])
        {
            if(!vis[x])
            {
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1, 0);

    bfs(1, adj, vis);
}