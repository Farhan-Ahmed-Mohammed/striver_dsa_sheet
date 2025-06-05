class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt=0;
        int n=s.length();
        for(int i=0;i<n-1;i++)
        {
            if(cnt>=1 && s[i]=='(')
            {
                ans+=s[i];
            }

            else if(cnt>1 && s[i]==')')
            {
                ans+=s[i];
            }

            if(s[i]=='(')
            {
                cnt++;
            }

            else
            {
                cnt--;
            }
            
        }

        return ans;
        
    }
};
