https://leetcode.com/problems/valid-triangle-number/

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int count = 0;
        
        for(int i=n-1; i>=2; i--)
        {
            int s = 0;
            int e = i-1;
            while(s<e)
            {
                if(nums[s]+nums[e]>nums[i])
                {
                    count += e-s;
                    e--;
                }
                else
                {
                    s++;
                }
            }
        }
        
        return count;
        
    }
};