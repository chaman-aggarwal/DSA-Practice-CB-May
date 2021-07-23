https://leetcode.com/problems/palindrome-linked-list/

class Solution {   
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* c=head;
        ListNode* p=NULL;
        ListNode* n;
        while(c!=NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        
        // find mid point
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // reverse right half
        slow->next = reverse(slow->next);
        slow = slow->next;
        
        // compare slow and head
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
            {
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        
        return true;
        
    }
};