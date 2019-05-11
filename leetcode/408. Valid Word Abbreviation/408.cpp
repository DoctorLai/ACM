// https://helloacm.com/how-to-check-valid-word-abbreviation-in-c/
// https://leetcode.com/problems/valid-word-abbreviation/

class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int len = abbr.size();
        int i = 0, j = 0;
        int cur = 0;
        while (i < len) {
            if (isdigit(abbr[i])) {
                if ((cur == 0) && (abbr[i] == '0')) { // no leading zeros in the word abbreviation
                    return false;
                }
                cur = cur * 10 + abbr[i] - '0';
            } else {
                j += cur;
                if (j >= word.size()) { // 'w999' is not abbreviation of 'word'
                    return false;
                }
                if (word[j] != abbr[i]) {
                    return false;
                }
                j ++;
                cur = 0;
            }
            ++ i;
        }
        j += cur;
        return j == word.size();
    }
};
