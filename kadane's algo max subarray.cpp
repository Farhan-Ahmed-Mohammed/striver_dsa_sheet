class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int sum=nums[0];  // bcoz we have to compare with sum+nums[i] if start with 0 both are same so start loop with 1
        for(int i=1;i<n;i++)
        {
           sum=max(nums[i],sum+nums[i]);
           ans=max(ans,sum);
          
        }

        return ans;
    }
};
