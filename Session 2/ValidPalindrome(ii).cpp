https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
    
    bool delete_string(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return delete_string(s, i+1, j) || delete_string(s, i, j-1);
            }
            i++;
            j--;
        }
     
        return true;
    }
};