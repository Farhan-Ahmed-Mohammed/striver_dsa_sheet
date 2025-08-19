class Solution {
public:
    void sub(vector<string> &st,string digits,int i,string temp,vector<string> &ans)
    {
        if(i>=digits.size())
        {
            ans.push_back(temp);
            return;
        }

        int num=digits[i]-'0'; // to get the number from input digit 
        string val=st[num];   // to get the string value from that number

        for(int j=0;j<val.size();j++)
        {
            temp.push_back(val[j]);
            sub(st,digits,i+1,temp,ans);
            temp.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> st(10);
        vector<string> ans;
        string temp;

        if(digits.size()==0)
        {
            return ans;
        }

        st[2]="abc";
        st[3]="def";
        st[4]="ghi";
        st[5]="jkl";
        st[6]="mno";
        st[7]="pqrs";
        st[8]="tuv";
        st[9]="wxyz";

        sub(st,digits,0,temp,ans);
        return ans;
        
    }
};
