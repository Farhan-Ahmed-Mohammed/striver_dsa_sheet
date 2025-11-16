class Solution {
public:
    int back(vector<vector<int>> &dp,int m,int n,int i,int j)
    {
        if(i>m || j>n)
        {
            return 0;
        }

        if(dp[i][j]!=-1)
        {
             return dp[i][j];
        }

        if(i==m && j==n)
        {
            dp[i][j]=1;
            return 1;
        }

        int inc=back(dp,m,n,i+1,j);
        int exc=back(dp,m,n,i,j+1);
        int ans=inc+exc;
        dp[i][j]=ans;
        return ans;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int cnt=back(dp,m,n,1,1);
        return cnt;    
    }
};
