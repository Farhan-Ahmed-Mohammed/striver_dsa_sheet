class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        string word;

        int i=n-1;
        while(i>=0)
        {
            //skip all the space
            while(i>=0 &&  s[i]==' ')
            {
                i--;
            }

            if(i<0)
            {
                break;
            }
            
            word="";  // make word empty before entering the new word in it
            while(i>=0  && s[i]!=' ' )
            {
                word=s[i]+word;   // here we add differently not word + s[i] as we are adding from reverse direction
                i--;
            }

            if(!ans.empty()) // for first word no need to add space after that we can add sapce before adding a new word 
            {
                ans+=' ';
            }

            ans+=word;
        }

        return ans;
        
    }
};
