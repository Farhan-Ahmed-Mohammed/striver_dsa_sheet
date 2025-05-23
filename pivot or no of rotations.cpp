int findKRotation(vector<int> &nums)  {  // rotations takes from pivot element so if we give index of pivot we get no of rotaions
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
