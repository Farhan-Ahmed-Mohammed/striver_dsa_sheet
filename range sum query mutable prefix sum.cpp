class NumArray {
public:
    vector<int> temp;
    vector<int> pre;
    NumArray(vector<int>& nums) {
        temp=nums;
        int sum=0;
        for(int i=0;i<temp.size();i++)
        {
            sum+=temp[i];
            pre.push_back(sum);
        }
        
    }
    
    void update(int index, int val) {
        int sum=val-temp[index];
        
        for(int i=index;i<temp.size();i++)
        {
            pre[i]=pre[i]+sum;
        }
        temp[index]=val;
        
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return pre[right];
        }

        return pre[right]-pre[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
