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
    vector<int> rightSideView(TreeNode* root) {  // just do level order traversal and store the last no of the level

        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
             TreeNode* temp=q.front();
             q.pop();

             if(temp!=NULL && q.front()==NULL)
             {
                ans.push_back(temp->val);
             }

             if(temp==NULL)
             {
                if(!q.empty())
                {
                    q.push(NULL);
                }
             }
             
             else
             {
                
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
