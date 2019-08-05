// https://helloacm.com/the-subsequence-algorithm-for-two-strings-how-to-check-if-a-string-is-subsequence-of-another/
// https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;
        int i = 0, j = 0;
        int n1 = s.size(), n2 = t.size();
        while ((i < n1) && (j < n2)) {
            if (s[i] == t[j]) {
                i ++;
                j ++;
            } else {
                j ++;
            }
        }
        return i == n1;
    }
};
