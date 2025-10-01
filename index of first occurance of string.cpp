class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1=0;
        int l2=0;
        int r2=0;
        int ans=-1;

        while(r2<haystack.size() && l2<haystack.size())
        {
            while(haystack[l2]!=needle[l1] && l2<haystack.size())
            {
                l2++;
            }

            r2=l2;

            while(haystack[r2]==needle[l1] && r2<haystack.size() && l1<needle.size())
            {
                r2++;
                l1++;
            }

            if(l1==needle.size())
            {
                ans=l2;
                break;
            }

            else
            {
                l1=0;
                l2++;
            }
        }
        return ans;
        
    }
};
