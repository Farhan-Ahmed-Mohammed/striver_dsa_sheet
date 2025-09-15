/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* temp=root;
        while(temp!=NULL)
        {
             if(p->val<=temp->val && q->val>=temp->val || (q->val<=temp->val && p->val>=temp->val)) // if one node is left side and other is in right side then the root it self is common anstor
        {
            return temp;
        }

        else if(p->val<temp->val && q->val<temp->val)
        {
            if(temp->left)
            {
                 temp=temp->left;
            }
           

            else
            {
                break;
            }
            
        }

        else{

            if(temp->right)
            {
                temp=temp->right;
            }
           

            else
            {
                break;
            }
           
        }

        }
       
        return temp;
    }
};
