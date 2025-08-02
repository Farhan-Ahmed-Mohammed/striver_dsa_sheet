class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        int subsets=1<<n; // we can also write 2^n 

        for(int num=0;num<subsets;num++) // numbers form 0 to 7 in case 1
        {
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                if(num&(1<<i)) // here it means if its ==1 dont use ==1 bcoz if is evaluated first as it have more precedence than &
                {
                    temp.push_back(nums[i]);
                }
            }

            ans.push_back(temp);

        }
        return ans;

        
    }
};
