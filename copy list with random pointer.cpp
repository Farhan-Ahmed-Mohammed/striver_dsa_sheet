/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        {
            return NULL;
        }
        Node* nnod=new Node(head->val);
        Node* ans=nnod;
        Node* ans2=nnod;
        Node* ans3=nnod;
        Node* temp=head->next;
        while(temp!=NULL)
        {
            nnod->next=new Node(temp->val);
            nnod=nnod->next;
            temp=temp->next;
        }

        temp=head;
        while(temp!=NULL)
        {
            if(temp->random==NULL)
            {
                ans->random=NULL;
            }

            else
            {
                Node* t1=head; // here we need to point to same node even though value is same some times nodes are different so we are using t1 to get correct node and ans2 isform the copied list
                ans2=ans3;
                while(t1!=temp->random)
                {
                    t1=t1->next;
                    ans2=ans2->next;
                }

                ans->random=ans2;
            }
            
            temp=temp->next;
            ans=ans->next;
        }
        return ans3;   
        
    }
};
