class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> mis;
        int n=arr.size();
        int ans=0;

        for(int i=0;i<1;i++)
        {
            for(int j=arr[i];j>0;j--)
            {
            if(j==arr[i])
            {
                continue;
            }
            
                mis.push_back(j);
            }
        }
        

        for(int i=1;i<n;i++)
        {
            for(int j=arr[i];j>arr[i-1];j--)
            {
                if(j==arr[i])
                {
                continue;
                }
                mis.push_back(j);
            }
        }
        sort(mis.begin(),mis.end());
        
        int m=mis.size();
        

        for(int i=arr[n-1]+1;i<=2000;i++)
        {
         mis.push_back(i);
        }


        for(int j=0;j<=1000;j++)
        {
            if(j+1==k)
            {
                ans=mis[j];
                break;
            }
        }

       
        return ans;
        
    }
};
