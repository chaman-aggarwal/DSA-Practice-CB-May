https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#


typedef pair<int, pair<int, int>> node;

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<node, vector<node>, greater<node>> pq;
        vector<int> ans;
        for(int i=0; i<K; i++)
        {
            pq.push({arr[i][0], {i, 0}});
        }
        
        while(!pq.empty())
        {
            node curr = pq.top();
            pq.pop();
            ans.push_back(curr.first);
            
            int r = curr.second.first;
            int c = curr.second.second;
            if(c+1 < K)
            {
                pq.push({arr[r][c+1], {r, c+1}});
            }
        }
        
        return ans;

    }
};