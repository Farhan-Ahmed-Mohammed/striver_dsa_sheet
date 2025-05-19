class Solution {
public:
    void quick(vector<int>& nums,int low,int high)
    {
        if(high>low)
        {
            int i=low;
            int j=high;
            int pivot=low;

            while(i<j)
            {
                while(nums[i]<=nums[pivot] && i<high)
                {
                    i++;
                }

                while(nums[j]>nums[pivot] && j>low)
                {
                    j--;
                }

                if(i<j)
                {
                    swap(nums[i],nums[j]);
                }
            }

            swap(nums[pivot],nums[j]);

              quick(nums,low,j-1);
              quick(nums,j+1,high);
        }

      
    }
    vector<int> quickSort(vector<int>& nums) {
        int n=nums.size();
        quick(nums,0,n-1);
        return nums;

    }
};
