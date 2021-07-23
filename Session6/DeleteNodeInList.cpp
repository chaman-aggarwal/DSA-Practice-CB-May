https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val; // copy
        node->next = node->next->next; // ignoring next node
        
    }
};