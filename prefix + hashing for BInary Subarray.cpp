class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> count;
        int n=nums.size();
        count[0]=1;  // we add 1 to ans everytime we get this i.e sum-goal=0 then ans++ we do here ans=ans+count[sum-goal] if for 0 case add 1 and for other case we do count[sum]++ in every loop and if sum=1 means we do count[1]=1 and later if sum-goal=1 then we can remove this one and make a subarray so we ans=ans+count[1] i.e we add add 1 to ans this is logic behind perfix + hashing
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];

            if(count.find(sum-goal)!=count.end()) // it means check till last if count[sum-goal] is present or not if not present we reach count.end()
            {
                ans+=count[sum-goal];
            }

            count[sum]++;
        }
        return ans;
        
    }
};
