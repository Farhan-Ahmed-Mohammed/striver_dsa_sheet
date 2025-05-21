class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        if(intervals.empty())
        {
            return intervals;
        }
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            vector<int> &last=ans.back();  //ans.backgives last inserted elemnt in array
            if(intervals[i][0]<=last[1])
            {
                last[1]=max(last[1],intervals[i][1]);
            }

            else
            {
                ans.push_back(intervals[i]);
            }

           
        }

       
        return ans;
        
    }
};
