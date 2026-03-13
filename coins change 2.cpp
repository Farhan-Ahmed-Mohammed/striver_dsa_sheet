class Solution {
public:
    int solve(int idx,vector<int> &coins,int amount,vector<vector<int>> &dp)
    {
        if(dp[idx][amount]!=-1)
        {
            return dp[idx][amount];
        }

        if(idx==0)
        {
            if(amount%coins[idx]==0)
            {
                return 1;
            }

            else
            {
                return 0;
            }
        }

        int exc=solve(idx-1,coins,amount,dp);
        int inc=0;
        if(coins[idx]<=amount)
        {
            inc=solve(idx,coins,amount-coins[idx],dp);
        }

        return dp[idx][amount]=inc+exc;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return solve(n-1,coins,amount,dp);
        
    }
};
