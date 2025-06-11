class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       int ans=0;    // as zero ^ any number is zero itself 
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i]; // as xor follows commutatve and associative property it cancels the same elements
        }
        return ans;
    }
};
