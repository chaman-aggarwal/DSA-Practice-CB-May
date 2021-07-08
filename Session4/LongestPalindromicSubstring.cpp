https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        int currLen, maxLen = 1;
        int l, r, start = 0;
        
        for(int i=0; i<n; i++)
        {
            // odd length
            l = i;
            r = i;
            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            currLen = r-l-1;
            if(currLen > maxLen)
            {
                maxLen = currLen;
                start = l+1;
            }
            
            // even length
            l = i;
            r = i+1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                l--;
                r++;
            }
            currLen = r-l-1;
            if(currLen > maxLen)
            {
                maxLen = currLen;
                start = l+1;
            }
        }
        
        return s.substr(start, maxLen);
        
    }
};