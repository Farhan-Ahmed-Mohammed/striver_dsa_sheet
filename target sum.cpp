class Solution {
public:
    void solve(vector<int> &nums,int target,int idx,int sum,int &cnt)
    {
        if(idx==nums.size())
        {
            if(sum==target)
            {
                cnt++;
            }
            return;
        }

       

        solve(nums,target,idx+1,sum+nums[idx],cnt);
        solve(nums,target,idx+1,sum-nums[idx],cnt);


    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        int cnt=0;
        solve(nums,target,0,sum,cnt);
        return cnt;
    }
};
