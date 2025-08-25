/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        ListNode* temp=head;

        while(temp!=NULL)
        {
            
            if(target==temp->val)
            {
                if(temp==head)
                {
                     ListNode* temp1=temp;
                    if(temp1->next==NULL)
                    {
                        return NULL;
                    }

                    temp1->next->prev=NULL;
                    head=head->next;
                    ListNode* nextnode=temp->next;
                    temp1->next=NULL;
                    delete temp1;
                    temp=nextnode;
                }

                else
                {
                    ListNode* temp1=temp;
                    temp->prev->next=temp->next;

                    if(temp->next!=NULL)
                    {
                        temp->next->prev=temp->prev;
                    }
                   
                     ListNode* nextnode=temp->next;
                     temp=nextnode;
                    delete temp1;
                }
               
            }

            else{
                
                temp=temp->next;
            }
           
        }

        return head;
    }
};
