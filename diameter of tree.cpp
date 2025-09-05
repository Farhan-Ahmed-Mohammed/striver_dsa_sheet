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

    int diameter=0;
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }

        int l=height(root->left);
        int r=height(root->right);

        diameter=max(diameter,l+r);

        return 1+max(l,r); // we want max of left and right we return this only when root is not null when root is null we return null 
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
        
    }
};
