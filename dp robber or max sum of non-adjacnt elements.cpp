class Solution {
public:
    int rob(vector<int>& nums) {
       int n=nums.size();
      // vector<int> dp(n,-1); //here upto n bcoz here there is no house n last is n-1 
    //    return solve(dp,nums,n-1); // as we have here over lapping sub problems like for f(3) we need f(1) and for f(2) also we need f(1) so its a overlapping sub problem

    int prev1=nums[0]; //tabulation+space optimisation best 
    int prev2=0;
    int curr;
    for(int i=1;i<n;i++)
    {
        int inc=nums[i];
        if(i>1)
        {
            inc+=prev2;
        }

        int exc=0+prev1;
        curr=max(inc,exc);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;

    // dp[0]=nums[0];  //tabulation method
    

    // for(int i=1;i<n;i++)
    // {
    //     int inc=nums[i];

    //     if(i>1)
    //     {
    //         inc+=dp[i-2];
    //     }

    //     int exc=0+dp[i-1];

    //     dp[i]=max(inc,exc);
    // }

    // return dp[n-1];
       
    }

    // int solve(vector<int> &dp,vector<int> &nums,int i) //dp memorization as it is top bottomm appraoch so n-1 to 0
    // {
    //     if(i==0)
    //     {
    //         return nums[i];
    //     }

    //     if(i<0)
    //     {
    //         return 0;
    //     }

    //     if(dp[i]!=-1)
    //     {
    //         return dp[i];
    //     }

    //     int inc=nums[i]+solve(dp,nums,i-2);
    //     int exc=0+solve(dp,nums,i-1);

    //     dp[i]=max(inc,exc);
    //     return dp[i];
    // }

    // int solve(vector<int> &nums,int i) //here i is the index of last element with recursion we get TLE so we move to dp
    // {
    //     if(i==0)
    //     {
    //         return nums[0];
    //     }

    //     if(i<0)
    //     {
    //         return 0;
    //     }

    //     int inc=nums[i]+solve(nums,i-2); 
    
    // here we are taking that element and i-2 (i.e) alternate element function call we are doing

    //     int exc=0+solve(nums,i-1); 
    
    // here we are ignoring that element and making its adjacent fucntion call

    //     return max(inc,exc); //here we are taking max of both of these elements smtimes we may take inc every time if it is max as inc of 2 funciton calls is not adjacent but it is alternate
            
    // }
};
