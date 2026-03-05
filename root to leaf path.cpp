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
        void pre(TreeNode* root,vector<vector<int>> &ans,vector<int> &temp)
        {
            
            if(root==NULL)
            {
                return;
            }

            if(root->left==NULL && root->right==NULL)
            {
                temp.push_back(root->data);
                ans.push_back(temp);
            }

            else
            {
                temp.push_back(root->data);
            }

            
            
            pre(root->left,ans,temp);
            pre(root->right,ans,temp);

            temp.pop_back(); // while back tracking we pop these out 

        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<vector<int>> ans;
            vector<int> temp;
            pre(root,ans,temp);
            return ans;
		}
};
