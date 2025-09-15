/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* t=new TreeNode(val);
            return t;
        }
        TreeNode* temp=root;
        TreeNode* store=new TreeNode(val);
        while(temp!=NULL)
        {
            if(val>temp->val && temp->right==NULL)
            {
                temp->right=store;
                break;

            }

            else if(val>temp->val && temp->right!=NULL)
            {
                
                temp=temp->right;
            }

            if(val<temp->val && temp->left==NULL)
            {
                temp->left=store;
                break;
                
            }

            else if(val<temp->val && temp->left!=NULL)
            {
                temp=temp->left;
            }
        }
        return root;    
    }
};
