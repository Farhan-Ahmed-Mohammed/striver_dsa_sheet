class Solution {
public:
    void solve(int idx,vector<vector<int>> &ans,vector<int> &temp,int k,int n,vector<int> &nums)
    {
        if(idx==nums.size())
        {
            return;
        }

        if(temp.size()==k)
        {
            if(n==0)
            {
                ans.push_back(temp);
            }
            
             
            return;
        }

        temp.push_back(nums[idx]);
        solve(idx+1,ans,temp,k,n-nums[idx],nums);

        temp.pop_back();
        solve(idx+1,ans,temp,k,n,nums);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int idx=0;
        vector<int> nums;
        for(int i=0;i<10;i++)
        {
            nums.push_back(i+1);
        }
        solve(idx,ans,temp,k,n,nums);

       
        return ans;
    }
};
