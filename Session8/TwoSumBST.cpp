https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
    
    void inorderT(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        inorderT(root->left, v);
        v.push_back(root->val);
        inorderT(root->right, v);
    }
    
public:
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> v;
        inorderT(root, v);
        int i=0;
        int j=v.size()-1;
        
        while(i<j)
        {
            if(v[i]+v[j]==k)
            {
                return true;
            }
            else if(v[i]+v[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return false;
        
    }
};