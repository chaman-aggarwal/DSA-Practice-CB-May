https://leetcode.com/problems/path-sum/

class Solution {
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
        {
            return false;
        }
        targetSum -= root->val;
        
        if(root->left==NULL && root->right==NULL) // leaf node
        {
            return targetSum==0;
        }
        
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
        
    }
};