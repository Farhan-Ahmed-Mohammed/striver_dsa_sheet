class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int> ans;
        queue<int> q;
        vector<int> vis(10000,0);
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            ans.push_back(val);
            
            for(int i=0;i<adj[val].size();i++)
            {
                if(vis[adj[val][i]]!=1)
                {
                    q.push(adj[val][i]);
                    vis[adj[val][i]]=1;
                }
                
            }
        }
        
        return ans;
    }
};
