https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        for(auto i:tokens)
        {
            if(i=="+" || i=="-" || i=="*" || i=="/")
            {
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                if(i=="+")
                {
                    s.push(y+x);
                }
                else if(i=="-")
                {
                    s.push(y-x);
                }
                else if(i=="*")
                {
                    s.push(y*x);
                }
                else
                {
                    s.push(y/x);
                }
            }
            else
            {
                s.push(stoi(i));
            }
        }
        
        return s.top();
        
    }
};