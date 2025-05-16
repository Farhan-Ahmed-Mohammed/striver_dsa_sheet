class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        prefix=nums;
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]+=prefix[i-1];// convert the given array to prefix sum array 
        }

        
        
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return prefix[right]; // if left is 0 means from 0 to right so r8
        }

        else
        {
            return prefix[right]-prefix[left-1]; 
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
