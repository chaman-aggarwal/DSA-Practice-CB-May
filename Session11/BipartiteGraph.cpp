https://leetcode.com/problems/is-graph-bipartite/

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int vertices = graph.size();
        vector<int> color(vertices, 0);
        
        for(int i=0; i<vertices; i++)
        {
            if(color[i]==0)
            {
                queue<int> q;
                q.push(i);
                color[i] = 1;
                
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    
                    for(auto nbr:graph[node])
                    {
                        // uncolored
                        if(color[nbr]==0)
                        {
                            q.push(nbr);
                            color[nbr] = -color[node];
                        }
                        // nbr is same color
                        else if(color[node]==color[nbr])
                        {
                            return false;
                        }
                    }
                }
                
            }
        }
        
        return true;
        

    }
};