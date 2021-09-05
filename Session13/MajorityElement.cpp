https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int cand = nums[0];
        int freq = 1;
        
        for(int i=1; i<n; i++)
        {
            if(nums[i]==cand)
            {
                freq++;
            }
            else 
            {
                freq--;
            }
            
            if(freq==0)
            {
                cand = nums[i];
                freq = 1;
            }
            
        }
        
        return cand;
    
        
    }
};