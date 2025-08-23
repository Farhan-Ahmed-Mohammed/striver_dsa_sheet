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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0,head); // to handle head deleting case we make a dummy varialbe bcoz slow->next dont exist when we have to delete head
        ListNode* fast=dummy; //dont mark as start mark as dummy bcoz we may delete start
        ListNode* slow=dummy;

         for(int i=0;i<=n;i++) //keep fast point n steps ahead and now move both of them one step and till we reach end then slow->next is the nod eto be deleted
         {
            fast=fast->next;
         }

        while(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        ListNode* temp=slow;
        ListNode* temp2=slow->next;
        temp->next=temp2->next;
        delete temp2;

        ListNode* ans=dummy->next; // to handle head deleting case we use this 
        delete dummy;

        return ans;
        
    }
};
