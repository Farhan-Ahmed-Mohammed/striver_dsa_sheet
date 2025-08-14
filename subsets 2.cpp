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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        int i=0;
        backtrack(ans,nums,i,temp);

        vector<vector<int>> res;
        map<vector<int>,int> freq;  // here unordred amp we cant use as there is no hash function for vetor<int> in cpp and mamp stores in sorted ordre so it can also check vectors just by compaing like {1,2},{1,3} as 2<3 they are different
        for(int i=0;i<ans.size();i++)
        {
            vector<int> t;
            for(int j=0;j<ans[i].size();j++)
            {
                t.push_back(ans[i][j]);
            }

            freq[t]++;

            if(freq[t]==1)
            {
                res.push_back(t);
            }
                
        }

        return res;
        
    }
};
