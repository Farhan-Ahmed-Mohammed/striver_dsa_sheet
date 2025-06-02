class Solution {
public:
    bool isPalindrome(string s) {
        string str;

        // Filter and convert to lowercase
        for (int i=0;i<s.length();i++) {
            char ch=s[i];
            if (ch >= 'A' && ch <= 'Z') {
                str.push_back(tolower(ch));
            }
            else if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                str.push_back(ch);
            }
        }

        int i = 0, j = str.size() - 1;
        while (i <= j) {
            if (str[i] != str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
