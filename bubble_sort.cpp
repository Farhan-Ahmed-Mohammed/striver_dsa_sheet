class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }

        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;

    }
};
