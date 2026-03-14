class Solution {
public:
    void back(int open,int close,vector<string> &ans,string &temp,int n)
    {
        if(open==close && close==n)
        {
            ans.push_back(temp);
            return;
        }

        if(open<n)
        {
            temp.push_back('(');
            back(open+1,close,ans,temp,n);
            temp.pop_back();
        }

        if(close<open)
        {
            temp.push_back(')');
            back(open,close+1,ans,temp,n);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        int open=0;
        int close=0;
        back(open,close,ans,temp,n);
        return ans;
        
    }
};
