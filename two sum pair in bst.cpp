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
    void in(TreeNode* temp,vector<int> &ans)
    {
        if(temp==NULL)
        {
            return;
        }

        in(temp->left,ans);
        ans.push_back(temp->val);
        in(temp->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {   //its not the most optiaml solution it can be optimised
        TreeNode* temp=root;
        vector<int> ans;
        in(root,ans);
        for(int i=0;i<ans.size();i++)
        {
            for(int j=i+1;j<ans.size();j++)
            {
                if(ans[i]+ans[j]==k)
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};
