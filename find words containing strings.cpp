class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
           int m=words[i].length();
           for(int j=0;j<m;j++)
           {
             if(words[i][j]==x)
             {
                ans.push_back(i);
                break;
             }
           }
        }
        return ans;
        
    }
};
