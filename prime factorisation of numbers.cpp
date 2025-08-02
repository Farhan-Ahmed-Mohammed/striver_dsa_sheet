class Solution{
    public:
        vector<vector<int>> primeFactors(vector<int>& queries){
            vector<vector<int>> ans;
            int n=queries.size();
            
            for(int i=0;i<n;i++)
            {
                vector<int> temp;  
                int j=2;
                while(queries[i]>1 && j<=queries[i])
                {
                    if(queries[i]%j==0)
                    {
                        temp.push_back(j);
                        queries[i]/=j;
                    }

                    else
                    {
                         j++;
                    }
                   
                }
                ans.push_back(temp);
            }
            return ans;
        }
};
