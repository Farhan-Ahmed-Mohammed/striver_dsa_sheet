class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int h=0;h<n-3;h++) // 3 more elements after h
        {
            if(h>0 && nums[h]==nums[h-1])
            {
                continue;
            }
        
       for(int i=h+1;i<n-2;i++) // to more elements after i
        {
            if(i>h+1 && nums[i]==nums[i-1] ) // to remove duplicates
            {
                continue;
            }
           int j=i+1;
           int k=n-1;
            
            while(j<k)
            {
                long long sum=1LL*nums[h]+nums[i]+nums[j]+nums[k]; // to avoid overflow
                if(sum==target )
                {
                    ans.push_back({nums[h],nums[i],nums[j],nums[k]});
                    k--;
                    j++;

                   

                    while(j<k && nums[j]==nums[j-1])// to remove duplicates
                    {
                        j++;
                    }

                    while(j<k && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                    
                }
                 else if(sum<target)
                 {
                    j++;
                 }

                 else
                 {
                    k--;
                 }
                
            }
        }
        }
        return ans;
            
        
    }
};
