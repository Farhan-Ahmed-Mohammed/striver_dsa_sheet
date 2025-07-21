class Solution {
public:
    int countPrimes(int n) {
        vector<bool> check(n+1,true); //first we assume all to be prime we are creating a vector of size n+1 and all have true in its position from index 0 to nexcept 1 and 0 then we eliminate all the multiples of 2 from prime list 
        int cnt=0;
        check[0]=check[1]=false;
        for(int i=2;i<n;i++)
        {
            if(check[i]==true)
            {
                cnt++;
                for(int j=2*i;j<n;j=j+i)
                {
                    check[j]=false;
                }
            }
        }
        return cnt;
    }
};
