class Solution {
public:
    int solve(vector<int> &nums,int mid)
    {
        int cnt=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }

            else
            {
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int i=0;i<nums.size();i++)
        {
            high+=nums[i];
        }

        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt=solve(nums,mid);
            if(cnt<=k) // if less tham k means we have to split this more
            {
                ans=min(ans,mid);
                high=mid-1;
            }

            else
            {
                low=mid+1;
            }
        }

        return ans;
        
    }
};
