class Solution {
public:
    int solve(vector<int> &prices,int idx,vector<vector<int>> &dp,int buy)
    {
        if(dp[idx][buy]!=-1)
        {
            return dp[idx][buy];
        }

        if(idx==prices.size())
        {
            return 0;
        }

        int profit=INT_MIN;
        if(buy==0)
        {
            profit=max((-prices[idx]+solve(prices,idx+1,dp,1)),0+solve(prices,idx+1,dp,0));
        }

        else
        {
            profit=max((prices[idx]+solve(prices,idx+1,dp,0)),0+solve(prices,idx+1,dp,1));  // here if we sell change buy to 0 bcoz of we sell then only we can buy
        }

        return dp[idx][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1)); // here we are 2nd dp is but or not buy so it is 0 or 1
        int buy=0;
        return solve(prices,0,dp,buy);
        
    }
};
