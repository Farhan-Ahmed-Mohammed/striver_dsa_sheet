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

class Solution {   //optimised code now more 50 digits also no problem
public:
    ListNode* rev(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* temp=head;

        while(temp!=NULL)
        {
            ListNode* fard=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fard;
        }

        return prev;
    }
    ListNode *addOne(ListNode *head) {

        head=rev(head);
        ListNode* temp=head;
        int carry=1;   //as we want to add 1 so intially take carry as 1

        while(temp!=NULL)
        {
            int sum=temp->val+carry;
            temp->val=sum%10; // if 10 we get 0
            carry=sum/10;  // if we got 10 again we get carry as 1 bcoz 1 digit increase if we get 10
            

            if(temp->next==NULL && carry==1)  // at last we add the 1 ex 99+1=100 here we get 00 and add 1 it bcms 001 and reverseit at last
            {
                temp->next=new ListNode(carry);
                carry=0;
            }

            temp=temp->next;

        }


        return rev(head);
       
    }
};
