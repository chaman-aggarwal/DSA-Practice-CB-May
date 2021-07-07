https://leetcode.com/problems/largest-number/

class Solution { 
    
    static bool compare(string i, string j)
    {
        return i+j>j+i;
    }

    
public:
    string largestNumber(vector<int>& nums) {
        
        int n = nums.size();
        vector<string> ans;
        
        for(int i=0; i<n; i++)
        {
            ans.push_back(to_string(nums[i]));
        }
        
        sort(ans.begin(), ans.end(), compare);
        
        string res="";
        for(int i=0; i<n; i++)
        {
            res += ans[i];
        }
        
        return res[0]=='0' ? "0" : res;
        
    }
};