https://leetcode.com/problems/consecutive-characters/

class Solution {
public:
    int maxPower(string s) {
        
        int curr = 1;
        int n = s.size();
        int max_count = 1;
        
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            max_count = max(max_count, curr); 
        }
        
        return max_count;
        
    }
};