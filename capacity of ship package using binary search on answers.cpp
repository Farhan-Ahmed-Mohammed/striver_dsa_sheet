class Solution {
public:
    int solve(vector<int> &weights,int mid)
    {
        int cnt=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
             if(sum+weights[i]>mid)
            {

                sum=weights[i];
                cnt++;
            }

            else
            {
                sum+=weights[i];
            }
           
        }

        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low = *max_element(weights.begin(),weights.end()); // gives max element of array 
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
        }
        int high=sum;

        while(low<=high)
        {
            int mid=(low+high)/2;
            int time=solve(weights,mid);
            cout<<"mid :"<<mid<<endl;
            cout<<time<<endl;
            if(time<=days)
            {
                ans=min(ans,mid);
                high=mid-1;
            }

            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
