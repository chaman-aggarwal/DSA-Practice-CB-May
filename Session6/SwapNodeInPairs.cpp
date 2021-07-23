https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        
        while(prev!=NULL)
        {
            ListNode* first = prev->next; 
            ListNode* second = NULL;
            
            if(first!=NULL)  
            {
                second = first->next; 
            }
            
            if(second!=NULL)
            {
                ListNode* secondNext = second->next;
                second->next = first;
                prev->next = second;
                first->next = secondNext;
                prev = first;
            }
            else
            {
                break;
            }
        }
        
        return dummy->next;
        
    }
};