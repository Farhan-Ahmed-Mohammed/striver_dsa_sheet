class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int mini_index=i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[mini_index]>nums[j])
                {
                    mini_index=j;
                }
                
            }
            swap(nums[mini_index],nums[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;

    }
};
