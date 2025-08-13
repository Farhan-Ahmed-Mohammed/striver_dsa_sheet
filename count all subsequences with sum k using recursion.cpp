class Solution{
    public:    	
    void subs(vector<vector<int>> &ans,vector<int> &nums,vector<int> &temp,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        subs(ans,nums,temp,i+1);

        temp.pop_back();
        subs(ans,nums,temp,i+1);
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        int cnt=0;
    	vector<vector<int>> ans;
        vector<int> temp;
        int i=0;
        subs(ans,nums,temp,i);

        for(int i=0;i<ans.size();i++)
        {
            int sum=0;
            for(int j=0;j<ans[i].size();j++)
            {
                sum+=ans[i][j];
            }
            if(sum==k)
            {
                cnt++;
            }
        }
        return cnt;

    }
};
