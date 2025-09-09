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
    void pre(TreeNode* temp1,TreeNode* temp2,bool &ans)
    {
        if(temp1==NULL && temp2==NULL)
        {
            return;
        }
      
        if((temp1!=NULL && temp2==NULL) || (temp1==NULL && temp2!=NULL))
        {
            ans=ans&false;
            return;
        }
        if(temp1->val!=temp2->val)
        {
            ans=ans&false;
        }
         pre(temp1->left,temp2->right,ans);  // as in symmetry temp1 left should be temp2 s right
         pre(temp1->right,temp2->left,ans);    
 
    }

    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        TreeNode* temp1=root->left;
        TreeNode* temp2=root->right;
        bool ans=true;
       
        pre(temp1,temp2,ans);
       
        return ans;

    }
};
