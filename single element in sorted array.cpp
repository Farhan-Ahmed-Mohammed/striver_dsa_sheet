class Solution {
public:


    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        while(low<high)
        {
            int mid=(low+high)/2;

            if(mid%2==1)
            {
                mid--;
            }

            if(nums[mid]==nums[mid+1])
            {
                low=mid+2;
            }

            else
            {
                high=mid;
            }
        }
        return nums[low];

        
    }// logic is below
};

//Pairs start at even indices.

//If the first occurrence of a pair is at an even index, the unique element is on the right.

//If it's at an odd index, the unique element is on the left.

