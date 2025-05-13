class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            ans=max(ans,cnt);

             if(nums[i]==0)
            {
                cnt=0;
            }
        }
        return ans;
        
    }
};
