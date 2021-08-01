https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> span(n);
       stack<int> s;
       s.push(0);
       span[0] = 1;
       
       for(int i=1; i<n; i++)
       {
           while(!s.empty() && price[s.top()] <= price[i])
           {
               s.pop();
           }
           
           span[i] = (s.empty()) ? (i+1) : (i-s.top());
           
           s.push(i);
           
       }
       
       return span;
       
    }
};