class Solution {
public:
    double myPow(double x, int n) {
        
        long long power=n;
        if(power<0)
        {
            x=1/x;
            power=-power;
        }

        double ans=1;
        while(power!=0)
        {
            if(power&1)
            {
                ans=ans*x;
            }

            power=power>>1;
            x=x*x;
        }
        return ans;
    }

};
