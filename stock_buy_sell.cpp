class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int mini=prices[0];
        int diff=0;
        for(int i=1;i<n;i++)
        {
            diff=prices[i]-mini;  // however we can only subtract with prices after mini and if a small number than mini update it
            mini=min(mini,prices[i]);
            ans=max(ans,diff);
        }
  
        return ans;

    }
};
