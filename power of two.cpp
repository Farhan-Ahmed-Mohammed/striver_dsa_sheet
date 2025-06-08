class Solution {
public:
    bool isPowerOfTwo(int n) {
        int nu=1;
        if(n==0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }

        int cnt=0;
        while(n!=1)
        {
            nu=n%2;
            if(nu!=0)
            {
                return false;
            }
            n=n/2;
        }
        return true;


        
    }
};
