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
        void preinpost(TreeNode* temp, vector<int> &pre, vector<int> &ino, vector<int> &post)
        {
            if(temp==NULL)
            {
                return;
            }

            pre.push_back(temp->data); // for pre first we add
            preinpost(temp->left,pre,ino,post);
            ino.push_back(temp->data); // for in we add after moving to leftmost
            preinpost(temp->right,pre,ino,post);
            post.push_back(temp->data); // for pst we add after moving to left most and right most
        }
		vector<vector<int> > treeTraversal(TreeNode* root){
			TreeNode* temp=root;
            vector<int> pre;
            vector<int> ino;
            vector<int> post;

            preinpost(temp,pre,ino,post);

            vector<vector<int>> ans;
            ans.push_back(ino);
            ans.push_back(pre);
            ans.push_back(post);

            return ans;
		}
};
