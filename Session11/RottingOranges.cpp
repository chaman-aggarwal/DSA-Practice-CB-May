https://leetcode.com/problems/rotting-oranges/

class Solution {
    
    class orange
    {
    public:
        int row;
        int col;
        int time;
    };
    
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        queue<orange> q;
        // push rotten oranges in queue
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i, j, 0});
                }
            }
        }
        
        int res = 0;
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        
        orange temp;
        while(!q.empty())
        {
            temp = q.front();
            q.pop();
            int r = temp.row;
            int c = temp.col;
            int depth = temp.time;
            res = max(res, depth);
            
            for(int i=0; i<4; i++)
            {
                int new_row = r + dx[i];
                int new_col = c + dy[i];
                
                if(new_row>=0 && new_row<m && new_col>=0 && new_col<n && grid[new_row][new_col]==1)
                {
                    grid[new_row][new_col] = 2;
                    q.push({new_row, new_col, depth+1});
                }
            }
        }
        
        // checking if all oranges are rotten
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        
        return res;
        
    }
};