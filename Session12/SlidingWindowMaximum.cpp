https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq(k);
        int n = nums.size();
        int i=0;
        // process first k elements
        for(i=0; i<k; i++)
        {
            while(!dq.empty() && nums[i] > nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        vector<int> ans;
        
        // process remaining elements
        for(i=k; i<n; i++)
        {
            ans.push_back(nums[dq.front()]);
            
            // remove the elements which are not part of window
            while(!dq.empty() && dq.front() <= i-k)
            {
                dq.pop_front();
            }
            
            while(!dq.empty() && nums[i] > nums[dq.back()])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        
        ans.push_back(nums[dq.front()]);
        
        return ans;
        
    }
};