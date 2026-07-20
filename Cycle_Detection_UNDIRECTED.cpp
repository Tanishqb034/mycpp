#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int src, vector<int> adj[], vector<int> &vis)
{
    queue<pair<int,int>> q;

    q.push({src,-1});
    vis[src]=1;

    while(!q.empty())
    {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();

        for(int neighbour:adj[node])
        {
            if(!vis[neighbour])
            {
                vis[neighbour]=1;
                q.push({neighbour,node});
            }
            else if(neighbour!=parent)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n+1,0);

    bool cycle=false;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(bfs(i,adj,vis))
            {
                cycle=true;
                break;
            }
        }
    }

    if(cycle)
        cout<<"Cycle Found";
    else
        cout<<"No Cycle";
}