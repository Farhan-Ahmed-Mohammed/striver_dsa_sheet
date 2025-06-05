class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(s.empty())
        {
            return 0;
        }
        int start=0;
        int cnt=0;
        int ans=1;
        bool check=false;
        int temp=0;
        for(int end=0;end<n;end++)
        {
            if(check==false)
            {
                 start=0;
            }

            if(check==true)
            {
                start=temp;
            }
           
            cnt=1;
            while(start<end)
            {
                if(s[start]==s[end])
                {
                   
                    temp=start+1;
                    check=true;
                    ans=max(ans,cnt);
                    break;
                }

                else
                 {
                    cnt++;
                    start++;
                    
                 }
                ans=max(ans,cnt);
               
            }
        }
        return ans;

    }
};
