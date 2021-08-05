https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
        {
            return NULL;
        }
        
        // searching
        if(root==p || root==q)
        {
            return root;
        }
        
        TreeNode* leftLca = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLca = lowestCommonAncestor(root->right, p, q);
        
        // condition for lca
        if(leftLca!=NULL && rightLca!=NULL)
        {
            return root;
        }
        
        return leftLca ? leftLca : rightLca;
        
        //     cond    ?  true    : false
        
    }
};