/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    void lefty(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
        {
            return;
        }

        if(root->left!=NULL)
        {
            ans.push_back(root->data);
            lefty(root->left,ans);
        }

        else
        {
            ans.push_back(root->data);
            lefty(root->right,ans);
        }

        
    }

    void leafy(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }

        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
        }

        leafy(root->left,ans);
        leafy(root->right,ans);
    }

    void righty(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
        {
            return;
        }

        if(root->right!=NULL)
        {
             righty(root->right,ans);
        }

        else{
            righty(root->left,ans);
        }

        ans.push_back(root->data); // right boundary we have to add in reverse order so this we write at last 

       
    }

    vector <int> boundary(TreeNode* root){
    	vector<int> ans;
        //first element of the tree is always first so we first put it 
        ans.push_back(root->data);
        lefty(root->left,ans);
        leafy(root->left,ans);
        leafy(root->right,ans);
        righty(root->right,ans);

        return ans;

    }
};
