class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  //t.c only O(n) this is the best solution
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            int temp=target;
            temp=temp-nums[i];
            if(mp.contains(temp) && mp[temp]!=i)
            {
                return {i,mp[temp]};
            }
        }
        return {};
       
        }

};





class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  //its t.c is O(n2)
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
               
    }
};
