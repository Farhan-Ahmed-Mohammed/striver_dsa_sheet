class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> count;
        count[0]=1;
        int cnt=0;
        int sum=0;
       
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];

            if(count.find(sum-k)!=count.end())
            {
                cnt+=count[sum-k];
            }

            count[sum]++;
 
            
        }
        return cnt;
        
    }
};
