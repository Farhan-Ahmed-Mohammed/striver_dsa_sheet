class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(m!=n)
        {
            return false;
        }

        for(int i=0;i<n;i++)
        {
           
            for(int j=1;j<n;j++)
            {

                 if((i+j)<=n-1 && s[i]==s[i+j] && t[i]!=t[i+j] )
            {
                return false;
            }

            if((i+j)<=n-1 && s[i]!=s[i+j] && t[i]==t[i+j] )
            {
                return false;
            }


            

            }

        }

        return true;
        
    }
};
