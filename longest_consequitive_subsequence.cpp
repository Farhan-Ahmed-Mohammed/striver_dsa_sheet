class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty())
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=1;
        int ans=1;
        for(int i=0;i<n-1;i++)
        {

            if(nums[i]+1==nums[i+1])
            {
                cnt++;
            }

            if(nums[i]==nums[i+1])
            {
                continue;
            }
            ans=max(ans,cnt);

            if(nums[i]+1!=nums[i+1])
            {
                cnt=1;
            }

        }
        return ans;

        
    }
};
