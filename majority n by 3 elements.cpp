class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int number=nums[i];
            count[number]++;  // stores the count of all elements in nums
        }  

        for(int i=0;i<n;i++)
        {
            if(count[nums[i]]>n/3)
            {
                ans.push_back(nums[i]);
                count[nums[i]]=0;  // to avoid duplicate make it 0
            }
        } 

        return ans;     
    }
};
