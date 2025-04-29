class Solution {
public:
    bool solvecheck(vector<int> &nums)
    {
        int n=nums.size();
        vector<int> temp=nums;

        sort(temp.begin(),temp.end());
        int cnt=0;

        while(cnt<n)
        {
            if(temp[cnt]!=nums[cnt])
            {
                rotateit(nums);
                break;
            }
            cnt++;
        }
    

        for(int i=0;i<n;i++)
        {
            if(temp[i]!=nums[i])
            {
              return false;
            }
        }
        return true;
    }

    vector<int> rotateit(vector<int> &nums)
    {
        int n=nums.size();
        int x=1;
        int j=0;
        while(j+1<n &&  nums[j]<=nums[j+1])
        {
            x++;
            j++;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[(i+x)%n];
        }
        nums=ans;
        return nums;
    }

    bool check(vector<int>& nums) {
        bool ans=solvecheck(nums);
        return ans;
    }
};
