class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int left=0;
        int right=nums.size()-1;
        int mod=1e9+7;
        vector<int> pow2(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            pow2[i]=(pow2[i-1]*2)%mod;
        }

        while(left<=right)
        {
           if(nums[left]+nums[right]<=target) // if left and right satisfy the condition them all teh numbers between them satisfy it so to find that nmbers we use 2^right-left and if answer is bit use %mod above we precomputed pow2 value we cannot use here direcrly pow(2,n) bcoz it gives in double some answer and not suaitable fir big values
           {
                cnt=(cnt+pow2[right-left])%mod;
                left++;
           }

           else
           {
            right--;
           }

        }
        return cnt;
        
    }
};
