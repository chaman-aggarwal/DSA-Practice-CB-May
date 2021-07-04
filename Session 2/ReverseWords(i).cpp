https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        
        while(!s.empty() && s.front()==' ')
        {
            s.erase(s.begin());
        }
        
        while(!s.empty() && s.back()==' ')
        {
            s.pop_back();
        }
        int n = s.size();
        
        string temp="";
        string ans;
        
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]==' ' && s[i-1]==' ')
            {
                continue;
            }
            else if(s[i]!=' ')
            {
                temp = s[i] + temp;
            }
            else
            {
                ans = ans + temp + ' ';
                temp = "";
            }
        }
        
        ans = ans + temp;
        
        return ans;
        
    }
};