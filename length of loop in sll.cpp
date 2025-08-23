/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=NULL;
        int cnt=1;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;

            if(fast==slow)
            {
                slow=head;
                while(fast!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                temp=slow;
                break;
            }
        }

        if(temp==NULL)
        {
            return 0;
        }
        temp=temp->next;

        while(temp!=slow)
        {
            temp=temp->next;
            cnt++;
        }

        return cnt;
        

    }
};
