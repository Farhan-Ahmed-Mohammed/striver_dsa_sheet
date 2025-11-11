class Solution {
public:
    int dp[601][101][101];
    int solve(vector<string> &strs,int m,int n,int i)
    {
        if(i==strs.size())
        {
            return 0;
        }

        if(dp[i][m][n]!=-1)
        {
            return dp[i][m][n];
        }

        int exc=solve(strs,m,n,i+1);
        int z=0;
        int o=0;
        for(int j=0;j<strs[i].size();j++)
        {
            if(strs[i][j]=='0')
            {
                z++;
            }

            else
            {
                o++;
            }
        }

        int inc=0;
       if (m - z >= 0 && n - o >= 0) {
    inc = 1 + solve(strs, m - z, n - o, i + 1);
}
        dp[i][m][n]=max(inc,exc);
        return max(inc,exc);
        
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        for(int i=0;i<601;i++)
        {
            for(int j=0;j<101;j++)
            {
                for(int k=0;k<101;k++)
                {
                    dp[i][j][k]=-1;
                }
            }
        }
       
        return solve(strs,m,n,0);
    }
};
