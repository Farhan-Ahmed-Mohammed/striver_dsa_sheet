class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        
        vector<int> ans;
        for(int i=0;i<32;i++)
        {
            int sum=0;
            for(int num=0;num<nums.size();num++)
            {
                if((nums[num]>>i)&1){ //doing right shift to ge the last digit
                    sum++;
                }
            }

            if(sum%3!=0)
            {
                result=result|(1<<i); //adding 1 where it is not divisible 3 means our number which is repeating is here remaining all are zeros. doing left shift to increase u0
            }
        }

        return result;

    }
};
