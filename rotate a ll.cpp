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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0)
        {
            return head;
        }

        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        k=k%n;
        while(k!=0)
        {
            ListNode* temp=head;
             ListNode* start=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            ListNode* newhead=temp->next; // before making it null store it always try to use more LineNode* variables in ll questions 
            temp->next=NULL;
            newhead->next=start;  // then point start as its next as start contains the whole ll
            head=newhead; // make it as head
            k--;
            
        }
        return head;

        
    }
};
