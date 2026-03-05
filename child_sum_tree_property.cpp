/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    void pre(TreeNode* root,bool &ans)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->left && root->right)
        {
            if(root->val!=root->left->val+root->right->val)
            {
                ans=ans&false;
                return;
            }
        }

        else if(root->right==NULL && root->left)
        {
            if(root->val!=root->left->val)
            {
                ans=ans&false;
                return;
            }
        }

        else if(root->left==NULL && root->right)
        {
            if(root->val!=root->right->val)
            {
                ans=ans&false;
                return;
            }
        }
        pre(root->left,ans);
        pre(root->right,ans);
    }
    bool checkChildrenSum(TreeNode* root) {
        bool ans=true;
        pre(root,ans);
        return ans;
    }
};
