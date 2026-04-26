class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    string sortVowels(string s) {

        vector<int> mp(26, 0);
        vector<int> firstPos(26, -1);

        // Step 1: count frequency + first occurrence
        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s[i])) {
                mp[s[i] - 'a']++;
                if(firstPos[s[i] - 'a'] == -1)
                    firstPos[s[i] - 'a'] = i;
            }
        }

        // Step 2: collect unique vowels
        vector<char> v;
        for(int i = 0; i < 26; i++) {
            char c = i + 'a';
            if(mp[i] > 0 && isVowel(c)) {
                v.push_back(c);
            }
        }

        // Step 3: bubble sort with tie-breaking
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v.size() - i - 1; j++) {

                if(mp[v[j]-'a'] < mp[v[j+1]-'a'] ||
                   (mp[v[j]-'a'] == mp[v[j+1]-'a'] &&
                    firstPos[v[j]-'a'] > firstPos[v[j+1]-'a']))
                {
                    swap(v[j], v[j+1]);
                }
            }
        }

        // Step 4: rebuild string
        string ans;
        int cnt = 0;

        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s[i])) {
                ans += v[cnt];
                mp[v[cnt] - 'a']--;

                if(mp[v[cnt] - 'a'] == 0)
                    cnt++;
            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};
