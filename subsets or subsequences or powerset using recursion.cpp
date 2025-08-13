class Solution {
public:
    void backtrack(vector<vector<int>> &ans,vector<int>& nums,int i,vector<int> &temp)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]); // including
        backtrack(ans,nums,i+1,temp);

        temp.pop_back();   // excluding 
        backtrack(ans,nums,i+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> temp;
        backtrack(ans,nums,0,temp);
        return ans;

    }
};
