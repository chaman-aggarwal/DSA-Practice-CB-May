https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root==NULL)
        {
            return {};
        }
        
        stack<TreeNode*> s1, s2;
        vector<vector<int>> res;
        vector<int> level;
        
        s1.push(root);
        
        while(!s1.empty() || !s2.empty())
        {
            while(!s1.empty())
            {
                TreeNode* curr = s1.top();
                s1.pop();
                level.push_back(curr->val);
                
                if(curr->left)
                {
                    s2.push(curr->left);
                }
                if(curr->right)
                {
                    s2.push(curr->right);
                }
            }
            res.push_back(level);
            level.clear();
            while(!s2.empty())
            {
                TreeNode* curr = s2.top();
                s2.pop();
                level.push_back(curr->val);
                
                if(curr->right)
                {
                    s1.push(curr->right);
                }
                if(curr->left)
                {
                    s1.push(curr->left);
                }
            }
            if(level.size()>0)
            {
                res.push_back(level);
                level.clear();
            }

        }
        
        return res;
        
    }
};