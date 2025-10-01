class Solution {
public:
    int climbStairs(int n) {

        if(n<2)
        {
            return n;
        }

        int prev1=2, prev2=1,curr; //we are using fibonacci logic here

        for(int i=3;i<=n;i++)
        {
            curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }

        return prev1;
        
        
    }
};

//method 2

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);  //n+1 bcoz we need from 0 to till n as for 2 we get 0 and 1 as n-1 and n-2 
        return solve(n,dp);    
    }

    int solve(int n,vector<int> &dp)
    {
        if(n==0)
        {
            return 1;
        }

        if(n<0)
        {
            return 0;
        }

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
    }
};
