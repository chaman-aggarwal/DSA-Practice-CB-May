https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { 
        
        int n = matrix.size();
        
        // take transpose
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // reverse each row
        for(int i=0; i<n; i++)
        {
//             int s = 0;
//             int e = n-1;
            
//             while(s<e)
//             {
//                 swap(matrix[i][s], matrix[i][e]);
//                 s++;
//                 e--;
//             }
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};