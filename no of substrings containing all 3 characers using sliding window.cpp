class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int cnt=0;
        unordered_map<char,int> freq; // we can use vector as only 3 characters are there and with vector or t.c improves
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]]++;

            
            while(freq['a']>=1 && freq['b']>=1 && freq['c']>=1)
            {
                cnt=cnt+(s.size()-right);  // if a string has 3 character then all the strings right side to are valid so we add them all and keep increasing the left and check and add all substrings 
                freq[s[left]]--;
                left++;
               
            }
        }

        return cnt;
        
    }
};
