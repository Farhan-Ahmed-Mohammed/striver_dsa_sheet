class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        if(s.length()!=t.length())
        {
            return false;
        }

        sort(s.begin(),s.end()); // sorted in alphabetic order
        sort(t.begin(),t.end());

        if(s==t)
        {
            return true;
        }

       
        return false;

    }
};
