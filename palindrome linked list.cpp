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
class Solution {   //optimised
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast->next!=NULL && fast->next->next!=NULL) // her we want mid pt and fast shound not be null 
        {
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode* prev=NULL;
        ListNode* curr=slow->next;

        while(curr!=NULL)
        {
            ListNode* fard=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fard;
        }

        ListNode* temp1=prev;
        ListNode* temp2=head;

        while(temp1!=NULL)
        {
            if(temp1->val!=temp2->val)
            {
                return false;
            }

            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};


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
class Solution {   // brute force
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int> ans;

        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }

        int n=ans.size();
        for(int i=0;i<n/2;i++)
        {
            if(ans[i]!=ans[n-1-i])
            {
                return false;
            }
        }

        return true;
        
    }
};
