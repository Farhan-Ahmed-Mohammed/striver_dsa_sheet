class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum=0;
        int n=nums.size();

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }

        if(sum%2!=0)
        {
            return false;
        }

        int target=sum/2;

        vector<vector<int>> dp(n,vector<int>(target+1,-1));

        return solve(nums,0,target,dp);

    }

    bool solve(vector<int> &nums,int i,int target,vector<vector<int>> &dp)
    {
        if(i>=nums.size())
        {
            return false;
        }

        if(target<0)
        {
            return false;
        }

        if(target==0)
        {
            return true;
        }

        if(dp[i][target]!=-1)
        {
            return dp[i][target];
        }

        int inc=solve(nums,i+1,target-nums[i],dp);
        int exc=solve(nums,i+1,target-0,dp);

        if(inc==true) // we can optimise it using tabulation+space optimisation 
        {
            dp[i][target]=true;
        }

        else if(exc==true)
        {
            dp[i][target]=true;
        }

        else
        {
            dp[i][target]=false;
        }
       // dp[i][target]=inc|exc; //means take true of these two it is short form of the above 2 lines if we include some elment and got target then the remaining are excluded element that form the other subset 
        return dp[i][target];
    }
};
