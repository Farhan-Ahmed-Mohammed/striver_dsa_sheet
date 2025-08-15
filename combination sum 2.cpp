class Solution {
public:
    void sub(vector<int>& candidates,vector<vector<int>> &ans,vector<int> &temp,int i,int target)
    {
       
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }

        for(int start=i;start<candidates.size();start++)
        {
            if(start>i && candidates[start]==candidates[start-1])
            {
                continue;
            }

            if(candidates[start]>target)
            {
            break;
            }
                temp.push_back(candidates[start]);
                sub(candidates,ans,temp,start+1,target-candidates[start]);
                temp.pop_back();
        }

    }

    

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)    
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        sub(candidates,ans,temp,0,target);
        return ans;
    }
};
