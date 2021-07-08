https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution { 
    
    bool isVowel(char ch)
    {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
    
public:
    string reverseVowels(string s) {
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            if(!isVowel(s[i]))
            {
                i++;
                continue;
            }
            if(!isVowel(s[j]))
            {
                j--;
                continue;
            }
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
        return s;
        
    }
};