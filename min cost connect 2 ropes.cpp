class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int st:sticks)
        {
            pq.push(st);
        } 
        int sum=0;

       
        while(pq.size()>1)
        {
            int temp=pq.top();
            pq.pop();
            int t2=pq.top();
            pq.pop();
            int cost=temp+t2;
            sum+=cost;
            pq.push(cost);
        }

        return sum;
    }
};
