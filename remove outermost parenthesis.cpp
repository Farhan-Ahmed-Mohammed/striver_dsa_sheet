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

// more easy solution

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans;
        int cnt1=0;
        int cnt2=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cnt1++;
            }

            if(s[i]==')')
            {
                cnt2++;
            }

            if(cnt1>cnt2 && cnt1>1)
            {
                ans+=s[i];
            }

            if(cnt1==cnt2)
            {
                cnt1=0;
                cnt2=0;
            }
        }
        return ans;
        
    }
};
