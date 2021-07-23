https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
        
        ListNode* oddHead = head;
        ListNode* evenHead = head->next;
        ListNode* odd = head;
        ListNode* even = head->next;
        
        while(even!=NULL && even->next!=NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        
        odd->next = evenHead;
        
        return oddHead;
        
        
    }
};