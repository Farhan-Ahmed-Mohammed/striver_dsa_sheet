class Solution {
public:
    void sub(vector<int>& candidates,int target,int i,vector<int> &temp,vector<vector<int>> &ans)
    {
        if(i==candidates.size())
        {
            return;
        }

        if(target==0)
        {
            ans.push_back(temp);
            return;
        }

        if(candidates[i]<=target)
        {
            temp.push_back(candidates[i]);
            sub(candidates,target-candidates[i],i,temp,ans); 
            temp.pop_back();
        }

        sub(candidates,target,i+1,temp,ans);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sub(candidates,target,0,temp,ans);
        return ans;
        
    }
};
