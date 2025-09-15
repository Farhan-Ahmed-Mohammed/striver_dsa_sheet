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
        if(temp!=NULL)
        {
            ans.push_back(temp->val);
        }
        in(temp->right,ans);
    }

    bool isValidBST(TreeNode* root) {  //we can make it more optimised just stroe the previousn in some consatnt and compare evenery time in the inorder function it pre is grater then ans=false or else ans is true
        TreeNode* temp=root;
        vector<int> ans;
        in(temp,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
            {
                return false;   //check that they are in increasing order if not then we can return false
            }
        }
       
        return true;
    }
};

//most optimal soluiton
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
long long pre=LLONG_MIN;
    void in(TreeNode* temp,bool &ans)
    {
        if(temp==NULL)
        {
            return;
        }

        in(temp->left,ans);
        if(temp!=NULL)
        {
           if(temp->val<=pre)
           {
            ans=false;
           }
           pre=temp->val;
        }
        in(temp->right,ans);
    }

    bool isValidBST(TreeNode* root) {  //we can make it more optimised just stroe the previousn in some consatnt and compare evenery time in the inorder function it pre is grater then ans=false or else ans is true
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
        TreeNode* temp=root;
        bool ans=true;
        in(temp,ans);
       
       
        return ans;
    }
};
