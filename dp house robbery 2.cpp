class Solution {
public:
    int rob(vector<int>& nums) {
         int n=nums.size();  //logic is just do for 0 to n-1 housees and 1 to n huose and take max of both we are using tabulation method here
        if(n==1)
        {
            return nums[0];
        }
       
        vector<int> dp(n,-1);
        vector<int> dp1(n,-1);

        dp[0]=nums[0];
        
        
        for(int i=1;i<n-1;i++)
        {
            int inc=nums[i];
            if(i>1)
            {
                inc+=dp[i-2];
            }

             int exc=0+dp[i-1];
           
            dp[i]=max(inc,exc);
        }

         dp1[1]=nums[1];

         dp1[0]=0; //as house 0 is not allowedwe take it as 0
        
        
        for(int i=2;i<n;i++)
        {
            int inc=nums[i];
            if(i>1)
            {
                inc+=dp1[i-2];
            }

             int exc=0+dp1[i-1];
           
            dp1[i]=max(inc,exc);
        }

        return max(dp1[n-1],dp[n-2]);
        
    }
};
