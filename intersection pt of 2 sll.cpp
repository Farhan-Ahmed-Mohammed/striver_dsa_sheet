/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;

        while(temp1!=temp2)
        {
            if(temp1!=NULL)
            {
                 temp1=temp1->next;
            }
           
            else
            {
                 temp1=headB;  //point to other head bcoz now bothe the temps travel same distance and meet at same time first temp1 travels m next nand temp2 forst n next m sp m+n is same distance so they meet at same point 
            }
            

             if(temp2!=NULL)
             {
                 temp2=temp2->next;
             }
           
            else
            {
                 temp2=headA;
            }
            

        }

        return temp1;
        
    }
};
