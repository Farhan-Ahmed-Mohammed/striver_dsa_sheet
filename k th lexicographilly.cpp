class Solution {
public:

    void back(vector<string> &ans,string &temp,int n)
    {
        if(temp.size()==n)
        {
            ans.push_back(temp);
            return;
        }

        if(temp.empty() || temp.back()!='a')
        {
            temp.push_back('a');
            back(ans,temp,n);
            temp.pop_back();
        }

        if(temp.empty() || temp.back()!='b')
        {
            temp.push_back('b');
            back(ans,temp,n);
            temp.pop_back();
        }

        if(temp.empty() || temp.back()!='c')
        {
            temp.push_back('c');
            back(ans,temp,n);
            temp.pop_back();
        }
    }

    string getHappyString(int n, int k) {

        vector<string> ans;
        string temp;

        back(ans,temp,n);

        if(k > ans.size())
            return "";

        return ans[k-1];
    }
};
