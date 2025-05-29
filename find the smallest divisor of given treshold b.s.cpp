class Solution {
public:
    int ceilDiv(int a,int b)
    {
        int real=0;
        
        int ans=a/b;
        
        if(a%b!=0)
        {
             real=ans+1;
        }

        else
        {
            real=ans;
        }
        
        return real;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int sum=0;
        int low=1;
        int high=1000000;
        int mid=(low+high)/2;
       while(low<=high)
       {
            sum=0;
            for(int j=0;j<n;j++)
            {
               sum+=ceilDiv(nums[j],mid); 
            }
            if(sum<=threshold)
            {
                high=mid-1;   
            }

            else if(sum>threshold)
            {
                low=mid+1;
            }
            mid=(low+high)/2;
       }   
        return mid+1;    
    }
};
