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
    void deleteNode(ListNode* node) {
        // copy the value of next of node into the node and point next of note to next->next-> of node and now as node and next of node are same delete the next of node by taking it into the temp
        node->val=node->next->val;
        ListNode* temp=node->next;
        node->next=node->next->next;
        delete temp;
       
        
    }
};
