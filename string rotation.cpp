class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        bool ans=false;
        if(s==goal)
        {
            return true;
        }
       
        int k=1;
        while(k<=n-1)
        {
             string temp(n,' ');
                for(int i=0;i<n;i++)
            {
                temp[i]=s[(i+k)%n];
            }
            if(temp==goal)
            {
                ans=true;
                break;
            }
            k++;

        }
        return ans;

    }
};
