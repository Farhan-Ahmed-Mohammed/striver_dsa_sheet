class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans;
        for(int i=n-1;i>=0;i--)
        {
            if((num[i]-'0')%2!=0) // if last digit is not even then entire number is odd so move till start from this odd digit
            {
                for(int j=0;j<=i;j++)
                {
                    ans+=num[j];
                }
                break;
            }
            
        }

        return ans;
        
    }
};
