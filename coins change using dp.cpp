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
                return amount/coins[idx];
            }

            else
            {
                return 1e9;
            }
        }

        int exc=0+solve(idx-1,coins,amount,dp);
        
        int inc=INT_MAX; // just declare it outside of if block
        if(coins[idx]<=amount)
        {
            inc=1+solve(idx,coins,amount-coins[idx],dp);
           
        }

        return dp[idx][amount]=min(exc,inc);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int idx=n-1;
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));
        int ans= solve(idx,coins,amount,dp);
        
        if(ans==1e9)
        {
            return -1;
        }

        return ans;
        
    }
};
