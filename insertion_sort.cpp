class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            int j=i-1;
            for(;j>=0;j--)
            {
                if(nums[j]>temp) // if nums[j]>temp then put it in nums[j+1]
                {
                    nums[j+1]=nums[j];
                }

                else
                {
                    break;
                }
            }
            nums[j+1]=temp;
        }

        return nums;

    }
};
