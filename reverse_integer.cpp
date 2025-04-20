class Solution {
public:
   
    int reverse(int x) {
        
        
       int temp,num=0;
        
        while(x!=0)
        {

            if(num>(INT_MAX)/10|| num<(INT_MIN)/10)//given this condition in question so check it every time we get sum 
        {
            return 0;
        }
             temp=x%10;
            num=(num*10)+temp;
            x=x/10;
            
        }
        

        return num;
    }
};
