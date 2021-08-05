https://leetcode.com/problems/sum-root-to-leaf-numbers/

class Solution { 
    
    int res = 0;
    void sumRootLeaf(TreeNode* root, int curr)
    {
        // preorder : root->left->right
        if(root==NULL)
        {
            return;
        }
        curr *= 10;
        curr += root->val;
        if(root->left==NULL && root->right==NULL)
        {
            res += curr;
            return;
        }
        sumRootLeaf(root->left, curr);
        sumRootLeaf(root->right, curr);
    }
    
public:
    int sumNumbers(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        sumRootLeaf(root, 0);
        
        return res;
        
    }
};