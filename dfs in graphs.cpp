class Solution {
  public:
    void solve(int start,vector<vector<int>>& adj,vector<int> &ans,stack<int> &st,vector<int> &vis)
    {
        st.push(start);
        vis[start]=1;
        ans.push_back(start);
        
        for(int i=0;i<adj[start].size();i++)
        {
            if(vis[adj[start][i]]==0)
            {
                solve(adj[start][i],adj,ans,st,vis);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int> ans;
        stack<int> st;
        vector<int> vis(10000,0);
        solve(0,adj,ans,st,vis);
        return ans;
        
    }
};
