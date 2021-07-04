https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
    
    void reverse_str(string &s, int start, int end)
    {
        while(start<end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    
public:
    string reverseWords(string s) {
        
        int start = 0;
        int end = 0;
        
        while(s[end]!='\0')
        {
            if(s[end]==' ')
            {
                reverse_str(s, start, end-1);
                start = end+1;
            }
            end++;
        }
        
        reverse_str(s, start, end-1);
        
        return s;
        
    }
};