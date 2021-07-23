https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
    
    int getLenght(ListNode* head)
    {
        int count = 0;
        
        while(head!=NULL)
        {
            count++;
            head = head->next;
        }
        
        return count;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        int l1 = getLenght(tempA);
        int l2 = getLenght(tempB);
        
        int diff = 0;
        if(l1<=l2)
        {
            diff = l2-l1;
            while(diff--)
            {
                tempB = tempB->next;
            }
        }
        else
        {
            diff = l1-l2;
            while(diff--)
            {
                tempA = tempA->next;
            }
        }
        
        while(tempA!=NULL)
        {
            if(tempA==tempB)
            {
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }
        
        return NULL;
        
    }
};