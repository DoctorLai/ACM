// https://helloacm.com/counting-substrings-with-only-one-distinct-letter-with-different-algorithms/
// https://leetcode.com/problems/count-substrings-with-only-one-distinct-letter/

class Solution {
public:
    int countLetters(string S) {
        int n = S.size(), ans = n;
        for (int j = 0, i = 1; i < n; ++ i) {
            if (S[i] == S[j]) {
                ans += i - j;
            } else {
                j = i;
            }
        }
        return ans;
    }
};
