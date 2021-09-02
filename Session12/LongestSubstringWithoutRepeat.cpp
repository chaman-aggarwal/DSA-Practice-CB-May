https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        
        unordered_set<char> st;
        
        while(r<n)
        {
            if(st.count(s[r])==0) // not present
            {
                st.insert(s[r]);
                maxLen = max(maxLen, r-l+1);
                r++;
            }
            else
            {
                st.erase(s[l]);
                l++;
            }
        }
        
        return maxLen;
        
    }
};