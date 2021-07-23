https://leetcode.com/problems/rotate-list/

class Solution {
    
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0)
        {
            return head;
        }
        
        ListNode* curr = head;
        int length = 1;
        while(curr->next!=NULL)
        {
            length++;
            curr = curr->next;
        }
        
        curr->next = head;
        k = k%length;
        int trav = length-k;
        
        while(trav--)
        {
            curr = curr->next;
        }
        
        head = curr->next;
        curr->next = NULL;
        
        return head;
        
    }
};