class Solution {
public:
    double myPow(double x, int n) {
        bool check=false;
        long long m=n;
        if(x==1)
        {
            return x;
        }

        if(x==-1 && n%2==0)
        {
            return -x;
        }

        else if (x==-1 && n%2!=0)
        {
            return x;
        }
        double ans;
        if(n<0)
        {
             ans=1/x;
             m=-m;  
        }

        else if(n==0)
        {
            ans=1;
        }

        else
        {
            ans=x;
        }
        double temp=1;

        while(m>0) //instead of doing many iterations we are reducing iterations by using x^n=(x^n/2)^2 if n even x*x^n=(x^n/2)^2 for n odd
        {
            if(m%2==1)
            {
                temp*=ans;
            }
            ans=ans*ans;
            m=m/2;
        }

//recursive more optimised code
        class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;

        if(m==0)
        {
            return 1;
        }


        if(m<0)
        {
           
           m=-m; // here we have it make it positive bcoz again if it do 1/x then we get number ans 1/1/x is x so we make it positive here
           x= 1/x;
           
        }

        if(m%2==0)
        {
            return myPow(x*x,m/2);
        }

        else{
            return x*myPow(x*x,m/2);
        }
        
    }
};

        
        return temp;
        
    }
};
