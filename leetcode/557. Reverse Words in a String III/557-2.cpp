// https://helloacm.com/how-to-reverse-words-in-a-string/
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        int i = 0, len = s.size();
        while (i < len) {
            int j = i;
            while ((j < len) && (s[j] != ' ')) j ++;
            std::reverse(begin(s) + i, begin(s) + j);
            i = j + 1;
        }
        return s;
    }
};
