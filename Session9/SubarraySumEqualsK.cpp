https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        unordered_map<int, int> m;
        int prefixSum = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++)
        {
            prefixSum += nums[i];
            if(prefixSum==k)
            {
                ans++;
            }
            if(m.count(prefixSum-k)>0)
            {
                ans += m[prefixSum-k];
            }
            m[prefixSum]++;
        }
        
        return ans;
        
    }
};