class Solution {
public:
    int back(int i,vector<int> &heights,vector<int> &dp)
    {
        if(i==0)
        {
            return 0;
        }

        if(dp[i]!=-1)
        {
            return dp[i];
        }

        int m1=back(i-1,heights,dp)+abs(heights[i]-heights[i-1]);

        int m2=INT_MAX;
        if(i>1)
        {
            m2=back(i-2,heights,dp)+abs(heights[i]-heights[i-2]);
        }

        return dp[i]=min(m1,m2);
    }
    int frogJump(vector<int>& heights) {
        int n=heights.size();
        vector<int> dp(n,-1);
        return back(n-1,heights,dp);

    }
};
