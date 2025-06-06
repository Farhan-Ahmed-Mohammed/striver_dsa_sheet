class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5=0;
        int cnt10=0;
        int cnt20=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {
           if(bills[i]==5)
           {
            cnt5++;
           }

           if(bills[i]==10 && cnt5>0)
           {
            cnt10++;
            cnt5--;
            continue;
           }

           else if(bills[i]==10 && cnt5<=0)
           {
            return false;
           }

           if(bills[i]==20 && cnt10>0 && cnt5>0)
           {
            cnt20++;
            cnt10--;
            cnt5--;
            continue;
           }

           else if(bills[i]==20 && cnt5>2)
           {
            cnt20++;
            cnt5=cnt5-3;
            continue;
           }

           else if(bills[i]==20)
           {
            return false;
           }

          
           }

        
        return true;
        
    }
};
