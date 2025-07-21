class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
			unordered_map<int,int> freq;
            vector<int> ans;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                freq[nums[i]]++;
            }

            for(int i=0;i<n;i++)
            {
                if(freq[nums[i]]%2==1)
                {
                    ans.push_back(nums[i]);
                }
            }

            sort(ans.begin(),ans.end());
            return ans;
		}
};
