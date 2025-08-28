class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        int zerocnt=0;
        int maxi=0;
        //we are using sliding window with 2 pointer here left is one pointer and right is one pointer 
        for(int right=0;right<n;right++)
        {
            if(nums[right]==0)
            {
                zerocnt++;
            }

            if(zerocnt>k)
            {
                if(nums[left]==0)
                {
                    zerocnt--;
                }
                left++;
            }

            maxi=max(maxi,right-left+1);
        }

        return maxi;
        
    }
};
