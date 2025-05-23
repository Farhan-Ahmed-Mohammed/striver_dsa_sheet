class Solution {
public:
    int searchPivot(vector<int>& nums)  // pivot is smallest element 
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        while(low<high)
        {
            
            if(nums[mid]>=nums[0])
            {
                low=mid+1;
            }

            else
            {
                high=mid;
            }
            mid=(low+high)/2;
        }
        return mid;
        
    }
    int binarySearch(vector<int>& nums,int target,int low,int high)
    {
        int mid=(low+high)/2;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            else if(nums[mid]>target)
            {
                high=mid-1;
            }

            else
            {
                low=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        int pivot=searchPivot(nums);
            
        
            
            if(nums[pivot]<=target  && target<=nums[n-1])  // now search from pivot to end of array 
            {
                return binarySearch(nums,target,pivot,high);
            }

            else
            {
                return binarySearch(nums,target,low,pivot-1);  // search from start to pivot
            }
           
        
        return -1;
        
    }
};
