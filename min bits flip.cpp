class Solution { real solution beats 100% unisng but manupulaiton
public:
    int minBitFlips(int start, int goal) {
        int xorResult=start^goal; // here no need to convert it will automatically convert when we use ^ and when both different then we get 1 in xor so if we get 1 in xor so cnt++
        int cnt=0;
        while(xorResult)
        {
            if(xorResult&1==1)
            {
                cnt++;
            }

            xorResult=xorResult>>1;
        }
        return cnt;
        
    }
};



//brute force
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int temp1=start;
        int temp2=goal;
        int ans=0;
        stack<int> t1; // stack bcoz we need FILO order for converting a number to binary
        stack<int> t2;
        vector<int> t3;
        while(temp1!=0)
        {
            int ans=temp1%2;
            t1.push(ans);
            temp1=temp1/2;
        }

        while(temp2!=0)
        {
            int ans=temp2%2;
            t2.push(ans);
            temp2=temp2/2;
        }

        int n=t1.size();
        int m=t2.size();
        int maxi=max(n,m);
        int mini=min(n,m);
        int diff=maxi-mini;
        if(m==n)
        {
            for(int i=0;i<n;i++)
            {
                if(t1.top()!=t2.top())
                {
                    ans++;
                }
                t1.pop();
                t2.pop();
            }
        }

        else if(m>n)
        {
            while(diff!=0)
            {
                t3.push_back(0);
                diff--;
            }

            for(int i=0;i<n;i++)
            {
                t3.push_back(t1.top());
                t1.pop();
            }

            for(int i=0;i<maxi;i++)
            {
                if(t2.top()!=t3[i])
                {
                    ans++;
                }
                t2.pop();
            }
        }

        else
        {
             while(diff!=0)
            {
                t3.push_back(0);
                diff--;
            }

            for(int i=0;i<m;i++)
            {
                t3.push_back(t2.top());
                t2.pop();
            }

            for(int i=0;i<maxi;i++)
            {
                if(t1.top()!=t3[i])
                {
                    ans++;
                }
                t1.pop();
            }
        }
       
    return ans;
        
    }
};
