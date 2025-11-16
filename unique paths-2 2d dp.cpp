class Solution {
public:
    int back(vector<vector<int>>& obstacleGrid,vector<vector<int>> &dp,int n,int m,int i,int j)
    {
        if(i>n || j>m)
        {
            return 0;
        }

        if(obstacleGrid[i-1][j-1]!=0)
        {
            return 0;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        if(i==n && j==m)
        {
            dp[i][j]=1;
            return 1;
        }

        int inc=back(obstacleGrid,dp,n,m,i+1,j);
        int exc=back(obstacleGrid,dp,n,m,i,j+1);
        int ans=inc+exc;
        dp[i][j]=ans;
        return ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
          if(obstacleGrid[0][0] == 1) // it the start point has obstical
          {
            return 0;
          }
            
        int cnt=back(obstacleGrid,dp,n,m,1,1);
        return cnt;
    }
};
