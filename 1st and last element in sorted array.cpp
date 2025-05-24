class Solution {
public:
     int binarySearch(vector<int>& nums,int target,int low,int high) //t.c is o(log n)
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int low=0;
        int high=n-1;
        int mid=binarySearch(nums,target,low,high);
         
         int temp1=mid;
         int temp2=mid;

         if(mid!=-1)
         {
            
            while(temp1-1>=0 && nums[temp1-1]==target)
            {
                temp1--;
            }

            while(temp2+1<n && nums[temp2+1]==target)
            {
                temp2++;
            }
         }

         ans.push_back(temp1);
         ans.push_back(temp2);

         if(ans.empty())
         {
            ans.push_back(-1);
            ans.push_back(-1);
         }
       
        return ans;

        
    }
};
