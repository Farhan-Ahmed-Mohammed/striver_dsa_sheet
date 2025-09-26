class Solution {
public:
    bool isHeap(vector<int>& nums) {
       
        for(int i=0;i<nums.size();i++)  //we can also run it till n-1/2 bcoz no need to check leaf nodes
        {
            if(2*i+1<nums.size())
            {
                if(nums[i]>nums[2*i+1])
                {
                    return false;
                }
            }

             if(2*i+2<nums.size())
            {
                if(nums[i]>nums[2*i+2])
                {
                    return false;
                }
            }


        }
        return true;

    }
};
