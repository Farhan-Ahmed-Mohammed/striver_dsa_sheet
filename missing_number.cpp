class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                cnt=i;
                break;
            }

 
        }

        for(int i=0;i<n;i++)
        {
             if(nums[i]==n)
            {
                ans=1;
            }
        }

        if(ans==0)
        {
            return n;
        }
        return cnt;
        
    }
};

M-2
Calculate the expected sum of numbers from 0 to n using the formula:

sum = 𝑛 * ( 𝑛 + 1 ) / 2

Subtract each number in the array from this total sum.

The result is the missing number.


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n * ( n + 1 ) / 2;
        for(int i = 0; i < n; i++)
            ans -= nums[i];
        return ans ;
    }
};
