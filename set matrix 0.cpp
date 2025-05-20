class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
      vector<int> temp1;
      vector<int> temp2;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    
                    temp1.push_back(i);
                    temp2.push_back(j);
                }
            }
        }

        
        int t1=0;
        int t2=0;
        while(t1<temp1.size() && t2<temp2.size())
        {
            
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==temp1[t1])
                    {
                        matrix[i][j]=0;
                    }

                    if(j==temp2[t2])
                    {
                        matrix[i][j]=0;
                    }
                }
            }
            t1++;
            t2++;
        }
     
        
    }
};
