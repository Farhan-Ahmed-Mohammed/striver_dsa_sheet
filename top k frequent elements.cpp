class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto i=freq.begin();i!=freq.end();i++)
        {
            pq.push({i->second,i->first});  //push freq and number so that it sort according to thefurst pushed
        }

        int cnt=0;
        vector<int> ans;
        while(cnt!=k)
        {
            auto top=pq.top();
            ans.push_back(top.second); //as we want that numbers so second
            pq.pop();
            cnt++;
        }

        return ans;

        
    }
};
