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
    int cnt=0;
    void in(TreeNode* temp,int k,int &ans)
    {
        if(temp==NULL)
        {
            return ;
        }

        in(temp->left,k,ans);
        cnt++;
        if(cnt==k)
        {
            ans=temp->val;
            return;
        }
        in(temp->right,k,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp=root;
        int ans=0;
        in(temp,k,ans);
        return ans;
        
        
    }
};
