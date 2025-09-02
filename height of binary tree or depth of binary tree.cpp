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
    int maxDepth(TreeNode* root) {
        TreeNode* temp=root;
        if(temp==NULL)
        {
            return 0;
        }

        int m1=maxDepth(root->left);
        int m2=maxDepth(root->right);

        int ans=1+max(m1,m2);

        return ans;
        
    }
};
