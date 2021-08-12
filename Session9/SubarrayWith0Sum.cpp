https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        int prefixSum = 0;
        
        for(int i=0; i<n; i++)
        {
            prefixSum += arr[i];
            if(prefixSum==0 || s.find(prefixSum)!=s.end())
            {
                return true;
            }
            s.insert(prefixSum);
        }
        
        return false;
        
    }
};