class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int res=0;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++)
        {
            vector<int> freq(26,0);
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                
                if(j-i+1>=3)  // no need to list all substrigs just cnt the freq of sub string greater than 3 and return ans
                {
                    int maxi=INT_MIN;
                    int mini=INT_MAX;

                    for(int k=0;k<freq.size();k++)
                    {
                        int f=freq[k];

                        if(f>0)
                        {
                            maxi=max(maxi,f);
                            mini=min(mini,f);
                        }
                    }
                    res=res+(maxi-mini);
                }  
            }
              
        }

       
             return res;
        }
       
       
        
    
};
