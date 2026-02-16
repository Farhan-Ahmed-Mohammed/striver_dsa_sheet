class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int m=n-k;
        int sum=0;
        for(int i=0;i<m;i++)  // logic is just do totasum-minSubarraySum by using static sliding window as we cannot find maximum subarray here bcause we have to pick it onlt from one side.
        {
            sum+=cardPoints[i];
        }

        int ans=sum;

        for(int i=m;i<n;i++)
        {
            sum=sum+cardPoints[i]-cardPoints[i-m];
            ans=min(ans,sum);
        }

        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum1+=cardPoints[i];
        }

        return sum1-ans;
        
    }
};
