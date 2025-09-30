class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int k;  // we have to store k value as we are going to use it in add function and here we have k but it is local to only this function so we declared a global k
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }

    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k)
        {
            pq.pop();
        }
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
