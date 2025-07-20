class Solution {
public:
    int divide(int dividend, int divisor) {
        long temp1=dividend;
        long temp2=divisor;
        long cnt=0;
        bool check=false;

        if(temp1<0 && temp2<0)
        {
            temp1=-temp1;
            temp2=-temp2;
        }


         if(temp2<0 && temp1>0)
        {
            temp2=-temp2;
            check=true;
        }

         if(temp1<0 && temp2>0)
        {
            temp1=-temp1;
            check=true;
        }

        while(temp1>=temp2) //not temp1>0 bcoz if 1/3 here it considers as 1 but i shound not divide
        {
            long b=temp2;
            long multiple=1;
            while(temp1>=(b<<1)) // every time multiply with 2 and check
            {
               b=b<<1;
               multiple=multiple<<1;
            }
            temp1=temp1-b;
            cnt=cnt+multiple;           
        }

        if(check==true)
        {
            cnt=-cnt;
        }

        if(cnt<INT_MIN)
        {
            cnt=INT_MIN;
        }

        if(cnt>INT_MAX)
        {
            cnt=INT_MAX;
        }
        return cnt;
    }
};
