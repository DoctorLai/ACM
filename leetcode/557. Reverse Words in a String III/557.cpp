// https://helloacm.com/how-to-reverse-words-in-a-string/
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        int i = 0, j = 0;
        string r = "";
        while (i < len) {
            while ((i < len) && s[i] != ' ') ++ i;
            if ((i == len) || (s[i] == ' ')) {
                r += reverse(s.substr(j, i - j));    
            }
            if (i < len) r += ' ';
            j = ++ i;
        }
        return r;
    }
    
    string reverse(string s) {
        string r = s;
        for (int i = 0; i < r.length() / 2; ++ i) {
            char t = r[r.length() - 1 - i];
            r[r.length() - 1 - i] = r[i];
            r[i] = t;
        }
        return r;
    }
};
