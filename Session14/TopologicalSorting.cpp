#include <bits/stdc++.h>
using namespace std;

void sorting(int node, vector<int> adj[], stack<int>& s, vector<int>& visited)
{
    visited[node] = 1;
    for(int nbr:adj[node])
    {
        if(!visited[nbr])
        {
            sorting(nbr, adj, s, visited);
        }
    }
    s.push(node);
}

vector<int> topoSort(int V, vector<int> adj[]) 
{
    stack<int> s;
    vector<int> visited(V, 0);
    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            sorting(i, adj, s, visited);
        }
    }
    vector<int> res;
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    return res;
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
    }
    vector<int> ans = topoSort(V, adj);
    for(int i=0; i<V; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}  