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
    void invert(TreeNode* root,TreeNode* temp)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->right)
        temp->left=new TreeNode(root->right->val);

        if(root->left)
        temp->right=new TreeNode(root->left->val);


        invert(root->left,temp->right);
        invert(root->right,temp->left);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        {
            return root;
        }
        TreeNode* temp=new TreeNode(root->val);
        TreeNode* ans=temp;
        invert(root,temp);
        return ans;
    }
        
};
