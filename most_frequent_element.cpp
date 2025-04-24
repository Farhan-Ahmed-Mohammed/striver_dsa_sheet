class Solution {
public:
    
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==2)
        {
            if((nums[1]-nums[0])<=k)
                return 2;
            
        }
        int cnt=1;
        int temp=k;
        int maxi=1;
        for(int i=n-1;i>=1;i--)
        {
            if(i>maxi)
            {
              for(int j=1;j<=i;j++)
            {
                if((nums[i]-nums[i-j])<=temp)
                {
                    cnt++;
                    temp=temp-(nums[i]-nums[i-j]);   
                }
               
                else
                {
                    break;
                }
                 maxi=max(maxi,cnt);
               
            }
            temp=k;
            cnt=1;
            }

            else
            {
                break;
            }
           
        }

        return maxi;
    }
};
