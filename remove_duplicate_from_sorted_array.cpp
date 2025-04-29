class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int check=INT_MIN;
        vector<int> temp=nums;
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=check)
            {
                nums[j]=temp[i];
                cnt++;
                j++;
              
            }

            check=temp[i];
        }
        return cnt;
        
    }
};
