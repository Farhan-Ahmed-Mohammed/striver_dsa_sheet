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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        TreeNode* temp=root;

        unordered_map<TreeNode*,bool> vis;
        stack<TreeNode*> st;
        vector<int> ans;
        st.push(temp);
        while(!st.empty())
        {
            TreeNode* t=st.top();

              if(t->right && vis[t]==false)
            {
                st.push(t->right);
            }

            if(t->left && vis[t]==false)
            {
                st.push(t->left);
            }


            if(t->left==NULL && t->right==NULL || vis[t]!=false)
            {
               ans.push_back(t->val);
               st.pop();
            }

             vis[t]=true;
        }

        return ans;
        
    }
};
