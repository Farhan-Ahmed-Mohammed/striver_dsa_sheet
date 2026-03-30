class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>> &adj,vector<int> &store,int &ans,vector<int> &vis)
    {
        vis[node]=1;
        store.push_back(node);
        

        for(int idx=0;idx<adj[node].size();idx++)
        {
            int i=adj[node][idx];
            if(vis[i]!=1)
            {
                dfs(i,adj,store,ans,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                }
            }
        }

        int ans=0;
        vector<int> store;
        int n=isConnected.size();
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0) // here zero means it is a different provonce bcoz if same province  then in the dfs traversal it becomes 1
            {
                dfs(i,adj,store,ans,vis);
                ans++;   
            }
        }

        return ans;

    }
};
