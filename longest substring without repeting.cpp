class Solution {
public:
    int lengthOfLongestSubstring(string s) {   // it has t.c of O(n2) so below is correct sliding window and O(n) solution
        int n=s.length();
        if(s.empty())
        {
            return 0;
        }
        int start=0;
        int cnt=0;
        int ans=1;
        bool check=false;
        int temp=0;
        for(int end=0;end<n;end++)
        {
            if(check==false)
            {
                 start=0;
            }

            if(check==true)
            {
                start=temp;
            }
           
            cnt=1;
            while(start<end)
            {
                if(s[start]==s[end])
                {
                   
                    temp=start+1;
                    check=true;
                    ans=max(ans,cnt);
                    break;
                }

                else
                 {
                    cnt++;
                    start++;
                    
                 }
                ans=max(ans,cnt);
               
            }
        }
        return ans;

    }
};


// int lengthOfLongestSubstring(string s) {
//     unordered_set<char> seen;
//     int n = s.size(), ans = 0;
//     int left = 0;

//     for (int right = 0; right < n; ++right) {
//         while (seen.count(s[right])) {
//             seen.erase(s[left]);
//             left++;
//         }
//         seen.insert(s[right]);
//         ans = max(ans, right - left + 1);  // right - left +1 means size of window that is end-start+1 we used cnt in place of it
//     }

//     return ans;
// }

// dry run of the above code 
//  Dry Run for: "abcabcbb"
// Initial: left = 0, right = 0, seen = {}, maxLen = 0

// Step-by-step:
// right = 0 → 'a' not in set
// → insert 'a', update maxLen = 1, right++

// right = 1 → 'b' not in set
// → insert 'b', update maxLen = 2, right++

// right = 2 → 'c' not in set
// → insert 'c', update maxLen = 3, right++

// right = 3 → 'a' is in set
// → remove 'a' (left = 0), left++ → left = 1

// Now 'a' not in set → insert 'a', right++ = 4, maxLen = 3

// right = 4 → 'b' is in set
// → remove 'b' (left = 1), left++ = 2
// → insert 'b', right++ = 5

// right = 5 → 'c' is in set
// → remove 'c' (left = 2), left++ = 3
// → insert 'c', right++ = 6

// right = 6 → 'b' is in set
// → remove 'a' (left = 3), left++ = 4
// → remove 'b', left++ = 5
// → insert 'b', right++ = 7

// right = 7 → 'b' is in set
// → remove 'c' (left = 5), left++ = 6
// → remove 'b', left++ = 7
// → insert 'b', right++ = 8

// Final:
// Longest substring: "abc"

// maxLen = 3
