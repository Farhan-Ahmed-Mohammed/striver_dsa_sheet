class Solution {
public:
    // long long ncr(int n,int r)  with this tle we get so we use in efficient way
    // {
    //     if(n==0 || r==0 || n==r)
    //     {
    //         return 1;
    //     }
    //     long long  nfact=1;
    //     long long  rfact=1;
    //     long long  subfact=1;
    //     long long ans=1;
    //     long long sub=n-r;
    //     for(int i=n;i>0;i--)
    //     {
    //         nfact=nfact*i;
    //     }

    //      for(int i=r;i>0;i--)
    //     {
    //         rfact=rfact*i;
    //     }

       

    //     for(int i=sub;i>0;i--)
    //     {
    //         subfact=subfact*i;
    //     }
       
    //         ans=(nfact)/(rfact*subfact);
        

        
    //     return ans;
    // }
            

    //nCr= n×(n−1)×⋯×(n−r+1)/r×(r−1)×⋯×1  this logic we use do go till 0 only till n-r+1 bcoz in neumarator and denominator n-r! get cancel
    

    long long ncr(int n, int r) {  // logic is above
    long long res = 1;
    for (int i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
            vector<int> row;
            for(int j=0;j<=i;j++)
            {
                row.push_back(ncr(i,j));
            }
            ans.push_back(row);

        }
        return ans;
        
    }
};
