https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int n = strs.size();
        
        int len = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(len > strs[i].size())
            {
                len = strs[i].size();
            }
        }
        
        for(int i=0; i<len; i++)
        {
            char curr = strs[0][i];
            for(int j=1; j<n; j++)
            {
                if(strs[j][i]!=curr)
                {
                    return ans;
                }
            }
            ans += curr;
        }
        
        return ans;
        
    }
};