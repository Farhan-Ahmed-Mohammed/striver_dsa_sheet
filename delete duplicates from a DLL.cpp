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
    ListNode * removeDuplicates(ListNode *head) {
        ListNode* temp=head;
        if(temp==NULL||temp->next==NULL)
        {
            return temp;
        }

        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->val==temp->next->val)
            {
                ListNode* dup=temp->next;
                if(temp->next->next!=NULL)
                {
                    temp->next=temp->next->next;
                    temp->next->prev=temp;
                }
               
                else  // it means this nod eis last node
                {
                    temp->next=NULL;
                    
                }
               
                delete(dup);
            }

            else{
                  temp=temp->next;
            }
          
        }

        return head;

    }
};
