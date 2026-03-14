class Solution {
public:
    void back(vector<string> &ans,int cnt,string &temp,int n)
    {
        if(cnt==n)
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back('0');
        back(ans,cnt+1,temp,n);
        temp.pop_back();

        temp.push_back('1');
        back(ans,cnt+1,temp,n);
        temp.pop_back();
    }
    vector<string> generateBinaryStrings(int n) {
        vector<string> ans;
        int cnt=0;
        string temp;
        back(ans,cnt,temp,n);
        vector<string> res;
        for(int i=0;i<ans.size();i++)
        {
             bool check=true;
            for(int j=0;j<ans[i].size();j++)
            {
               
                if(j+1<ans[i].size())
                {
                    if(ans[i][j]=='1' && ans[i][j+1]=='1')
                    {
                        check=false;
                        break;
                    }
                }

            }
            if(check==true)
                {
                    res.push_back(ans[i]);
                }

        }
        return res;
    }
};
