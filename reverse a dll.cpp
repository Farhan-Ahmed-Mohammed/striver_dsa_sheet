class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {

        if(head==NULL || head->next==NULL)
        {
            return head;
        }
       ListNode* temp=head;
       ListNode* temp2;
       

        while(temp!=NULL)  // we cannot write here temp->next!=NULL bcoz the last node will not get its next and prev swapped
        {
            temp2=temp;  // at last we do temp=temp->prev it bcms NULL ans we cant retunr it so store it in temp2
            swap(temp->next,temp->prev);
            temp=temp->prev;  // as next bcms prev so we do temp=temp->prev
        }

        return temp2;
       
    }
};
