class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        int check;
        unordered_map<char,int> deg;
        deg['I']=1;
        deg['V']=5;
        deg['X']=10;
        deg['L']=50;
        deg['C']=100;
        deg['D']=500;
        deg['M']=1000;

        if(n==1)
        {
            return deg[s[0]];
        }

        for(int i=n-1;i>=0;i--)
        {
            check=i;
            if(i==n-1)
            {
                ans+=deg[s[i]];
            }

            else if(i>0)
            {
                if(deg[s[i]]<deg[s[i+1]])
                {
                    ans=ans-deg[s[i]];
                }

                else
                {
                    ans+=deg[s[i]];
                }
            }
        }

        int i=check;

        if(i==0)
        {
            if(deg[s[i]]<deg[s[i+1]])
                {
                    ans=ans-deg[s[i]];
                }

                else
                {
                    ans+=deg[s[i]];
                }
        }
        return ans;
    }
};
