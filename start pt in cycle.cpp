/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            {
                slow=head;       //now distance from head to start pt and from meeting pt to start pt is same so we move one step and they meet at start pt so return slow 
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
               return slow;
            }
        }
        return NULL;
        
    }
};
