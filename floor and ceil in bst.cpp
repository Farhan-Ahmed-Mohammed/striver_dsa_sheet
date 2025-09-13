/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{	
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			TreeNode* temp=root;
            vector<int> ans;
            int maxi=-1;
            int mini=-1;
            while(temp!=NULL)
            {
                if(temp->data == key)
                 {
                    mini = maxi = temp->data; // key itself is both floor and ceil
                    break;
                 }
                 
                else if(temp->data>key)
                {
                    maxi=temp->data;
                    temp=temp->left;
                }

                else
                {
                    mini=temp->data;
                    temp=temp->right;
                }
            }

            ans.push_back(mini);
            ans.push_back(maxi);

            return ans;
		}
};
