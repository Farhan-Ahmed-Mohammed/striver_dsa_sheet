/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        queue<pair<Node*,int>> q;
        int r=0;
        q.push({root,r});
        map<int,int> mp;
        vector<int> ans;
        
        while(!q.empty())
        {
            pair<Node*,int> curr=q.front();
            q.pop();
            Node* temp=curr.first;
            int row=curr.second;
            
            mp[row]=temp->data;
            
             
            
            
            if(temp->left)
            {
                q.push({temp->left,row+1});
            }
            
            if(temp->right)
            {
                q.push({temp->right,row+1});
            }
            
        }
        
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            ans.push_back(i->second);
        }
        
        return ans;
        
    }
};
