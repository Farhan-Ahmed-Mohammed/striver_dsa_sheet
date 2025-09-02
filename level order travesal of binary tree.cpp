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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        {
            return {};
        }
        TreeNode* temp=root;
        queue<TreeNode*> q;
        q.push(temp);
        q.push(NULL);
        vector<vector<int>> ans;
        vector<int> res;

        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();

            if(temp==NULL)
            {
                ans.push_back(res);
                res.clear();
                if(!q.empty()) // if queue is empty then no need to add null and we come out of while loop
                {
                    q.push(NULL);
                }
            }

            else
            {   
                res.push_back(temp->val);
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }

                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
        }
        return ans;    
    }
};
