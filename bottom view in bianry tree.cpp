/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        queue<pair<Node*,int>> q;
        map<int,int> mp;
        int col=0;
        q.push({root,col});
        
        while(!q.empty())
        {
            pair<Node*,int> curr=q.front();
            q.pop();
            Node* temp=curr.first;
            int c=curr.second;
            
           
            mp[c] = temp->data;
            
            if(temp->left)
            {
                q.push({temp->left,c-1});
            }
            
            if(temp->right)
            {
                q.push({temp->right,c+1});
            }
            
            
        }
        
        vector<int> ans;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            ans.push_back(i->second);
        }
        
        return ans;
        
    }
};
