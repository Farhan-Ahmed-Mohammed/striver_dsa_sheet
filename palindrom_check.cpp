class Solution {
public:
    int revdigit(int x)
    {
        long rev=0;
        int temp=0;;
        while(x!=0)
        {
            temp=x%10;
            rev=(rev*10)+temp;
            x=x/10;
        }
        int ans=rev;
        return ans;
    }
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }

        int reverse=revdigit(x);
        if(reverse==x)
        {
            return true;
        }

        else
        {
            return false;
        }

        
    }
};
