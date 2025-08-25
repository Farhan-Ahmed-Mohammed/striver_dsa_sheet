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

class Solution {   //Brute force works only for numbers upto 19 digits
public:
    ListNode *addOne(ListNode *head) {

        if(head==NULL) // if the list is empty then we return by adding 1 ot it 
        {
            return new ListNode(1);
        }
        long long num=0;
        ListNode* temp=head;
       
        while(temp!=NULL)
        {
            num=(num*10)+temp->val;
            temp=temp->next;
        }

        num=num+1;
        vector<int> digit;
        
        while(num!=0)
        {
            digit.push_back(num%10);
            num=num/10;
        }

       reverse(digit.begin(),digit.end());
        ListNode* dummy=new ListNode(-1);
        ListNode* ans=dummy;

       for(int i=0;i<digit.size();i++)
       {
        ans->next=new ListNode(digit[i]);
        ans=ans->next;
       }

        return dummy->next;  //return next because as the first node is -1 we just put it while initializing the linked list dummy

    }
};
