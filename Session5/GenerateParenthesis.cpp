https://leetcode.com/problems/generate-parentheses/

class Solution {      
    
    void parenthesis(int idx, int n, int open, int close, string &ch, vector<string>& res)
    {
        // base case
        if(idx==2*n)
        {
            res.push_back(ch);
            return;
        }
        // n= 2, open = 2
        if(open<n)
        {
            ch.push_back('(');
            parenthesis(idx+1, n, open+1, close, ch, res);
            ch.pop_back();
        }
        if(close<open)
        {
            ch.push_back(')');
            parenthesis(idx+1, n, open, close+1, ch, res);
            ch.pop_back();
        }
        
    }
    
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        string ch="";
        
        parenthesis(0, n, 0, 0, ch, res);
        
        return res;
        
    }
};