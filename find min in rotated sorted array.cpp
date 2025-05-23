class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        while(low<high)
        {
            if(nums[mid]>nums[n-1])
            {
                low=mid+1;
            }

            else
            {
                high=mid;
            }

            mid=(low+high)/2;

        }
        return nums[mid];
        
    }
};
