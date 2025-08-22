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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* fard=NULL;

        while(temp!=NULL)
        {
            fard=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fard;
        }

        return prev;  // as temp becms null but prev is the last node so we return it

        
    }
};
