class Solution {
public:
    int slidingWindow(vector<int> &nums,int goal)
    {
        if(goal<0) // if goal is 0 then goal-1 is -1 so to over come it we write this 
        {
            return 0;
        }
        int n=nums.size();
        int sum=0;
        int start=0;
        int count=0;
        for(int end=0;end<n;end++)
        {
            sum+=nums[end];

            while(sum>goal)
            {
                sum=sum-nums[start];
                start++;
            }

            count=count+(end-start+1); // here not only +1 bcoz we are //adding all possible sub arrays b/w right to left 
        }
        return count;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return slidingWindow(nums,goal)-slidingWindow(nums,goal-1);
        // here fun(2)-fun(1)=(2,1,0)-(1,0)=2 so we get no of subarrays for our goal i.e 2
        
    }
};
