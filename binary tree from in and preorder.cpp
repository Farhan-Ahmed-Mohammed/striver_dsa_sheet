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
    int findIdx(vector<int> &inorder,int num)
    {
        for(int i=0;i<inorder.size();i++)
        {
            if(num==inorder[i])
            {
                return i;
            }
        }

        return -1;
    }

    TreeNode* solve(vector<int> &preorder,vector<int> &inorder,int &i,int ins,int ine,int n)
    {
        if(i>=n || ins>ine)
        {
            return NULL;
        }

        int element=preorder[i++];
        TreeNode* root=new TreeNode(element);
        int pos=findIdx(inorder,element);
        
        root->left=solve(preorder,inorder,i,ins,pos-1,n);
        root->right=solve(preorder,inorder,i,pos+1,ine,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
       int n=preorder.size();
       int i=0;
       TreeNode* ans=solve(preorder,inorder,i,0,n-1,n); // here inroder end is n-1 bcz we pass the range of number like start and end but for pre we only pass the index so it is till n
       return ans;
        
    }
};
