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
    int findPages(vector<int> &nums, int m)  {
        int n=nums.size();
        if(m>nums.size())
        {
            return -1;
        }
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
            int page=solve(nums,mid);

            if(page<=m)
            {
                ans=min(ans,mid);
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }

        return ans;
        
    }
};
