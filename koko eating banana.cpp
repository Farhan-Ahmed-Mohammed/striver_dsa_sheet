class Solution {
public:
    long long upper(long long a,long long b)
    {
        long long ans=a/b;
    
        if(a%b==0)
        {
            return a/b;
        }

        else
        {
            return ans+1;
        }

        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int low=1;
        int high=piles[n-1];
        long long ans=high;
       
        while(low<=high)
        {
             int mid=low+(high-low)/2;
             long long total=0;
           
        for(int i=0;i<n;i++)
        {
            total+=upper(piles[i],mid);
        }
         if(total<=h)
           {
            ans=mid;  // check for lower answer 
            high=mid-1;
           }

           else
           {
            low=mid+1; // move farward by moving low
           }
        
        }
       
       return ans;
        
    }
};
