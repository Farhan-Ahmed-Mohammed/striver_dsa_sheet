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

    int i=0;
    void sol(TreeNode* t1,vector<int> &ans) 
    {
        if(t1==NULL)
        {
            return;
        }

        sol(t1->left,ans);
        if(t1->val!=ans[i])
        {
            t1->val=ans[i];
            i++;
        }

        else
        {
            i++;
        }
        sol(t1->right,ans);
    }
    void recoverTree(TreeNode* root) {  //it is not the msot optiaml we can jsut put the numerbs which are not sorted in inorder and swap them just by uisng 2 variables
        TreeNode* temp=root;
        vector<int> ans;
        in(temp,ans);
        TreeNode* t1=root;
        sort(ans.begin(),ans.end());
        sol(t1,ans);
        
    }
};
