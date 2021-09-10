#include <bits/stdc++.h>
using namespace std;

bool checkCycle(vector<int>& visited, int node, int parent, vector<int> adj[])
{
    visited[node] = 1;
    for(int nbr:adj[node])
    {
        if(!visited[nbr])
        {
            if(checkCycle(visited, nbr, node, adj))
            {
                return true;
            }
        }
        else if(nbr!=parent)
        {
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) 
{
    vector<int> visited(V, 0);
    for(int i=0; i<V; i++)
    {
        if(visited[i]==0)
        {
            if(checkCycle(visited, i, -1, adj))
            {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >>E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) 
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = isCycle(V, adj);
    if(ans){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}  