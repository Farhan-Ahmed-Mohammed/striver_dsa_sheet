class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string r;
        int n=strs.size();
        int m=strs[0].size();
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            char ch=strs[0][i];
            for(int j=0;j<n;j++)
            {
                
                if(ch!=strs[j][i])
                {
                    ans="";
                    cnt=1;
                   break;
                }

                else
                {
                    ans=strs[j][i];
                }

                
            }

            r+=ans;
            if(cnt==1)
            {
                break;
            }

        }
        return r;
        
    }
};
