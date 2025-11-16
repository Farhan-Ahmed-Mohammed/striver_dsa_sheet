class Solution {
public:
    int back(vector<vector<int>>& grid,vector<vector<int>>& dp,int n,int m,int i,int j)
    {
        if(i>n || j>m)
        {
            return 2000000000;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        if(i==n && j==m)
        {
            dp[i][j]=grid[n-1][m-1];
            return dp[i][j];
        }


        int inc=back(grid,dp,n,m,i+1,j);
        int exc=back(grid,dp,n,m,i,j+1);
        dp[i][j] = grid[i-1][j-1] + min(inc, exc);
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int cnt=back(grid,dp,n,m,1,1);
        return cnt;    
    }
};
