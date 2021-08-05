https://leetcode.com/problems/kth-smallest-element-in-a-bst/

class Solution {
    int count=0;
    int res;
    
    void kthSmall(TreeNode* root, int k)
    {
        if(root==NULL)
        {
            return;
        }
        kthSmall(root->left, k);
        count++;
        if(count==k)
        {
            res = root->val;
            return;
        }
        kthSmall(root->right, k);
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        
        kthSmall(root, k);
        return res;
        
    }
};