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
    ListNode* rev(ListNode* temp,ListNode* fard,ListNode* prev)
    {
        if(temp==NULL)
        {
            return prev;
        }

        fard=temp->next;
        temp->next=prev;
        prev=temp;
        temp=fard;
        return rev(temp,fard,prev);

       


    }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* fard=NULL;
        ListNode* prev=NULL;
        return rev(temp,fard,prev);


        
    }
};
