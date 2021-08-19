https://leetcode.com/problems/unique-binary-search-trees/

class Solution {
public:
    int numTrees(int n) {
        
        // 1,1,2,5,14...
        
        vector<int> dp(n+1, 0);
        dp[0] = dp[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<i; j++)
            {
                dp[i] += dp[j] * dp[i-j-1];
                //         c0  * c2
                //         c1  * c1
                //         c2  * c0 
            }
        }
        
        return dp[n];

    }
};