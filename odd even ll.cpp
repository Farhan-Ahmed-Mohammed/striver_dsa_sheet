/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head->next;
        ListNode* dummy=new ListNode(-1);
        ListNode* ans=dummy;
        while(fast!=NULL)
        {
            ans->next=new ListNode(fast->val);
             ans=ans->next;   // at first answer point to dummy after adding fast value we moev answer farward now it is pointing to that fast value
             if(fast->next==NULL || fast->next->next==NULL)
             {
                break;
             }
            fast=fast->next->next;
           
        }

         while(slow!=NULL)
        {
            ans->next=new ListNode(slow->val);
            ans=ans->next;
             if(slow->next==NULL || slow->next->next==NULL)
             {
                break;
             }
            slow=slow->next->next;
           
        }
        
        return dummy->next;
    }
};
