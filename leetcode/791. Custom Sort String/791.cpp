// https://helloacm.com/the-custom-sort-string-algorithm-with-count-and-write/
// https://leetcode.com/problems/custom-sort-string/

class Solution {
public:
    string customSortString(string S, string T) {
        int s[26] = { 0 };
        int t[26] = { 0 };
        for (const auto n: S) {
            s[n - 'a'] ++;
        }
        for (const auto n: T) {
            t[n - 'a'] ++;
        }
        string r = "";
        for (int i = 0; i < S.size(); ++ i) {
            for (int k = 0; k < t[S[i] - 'a']; ++ k) {
                r += S[i];
            }
        }
        for (int i = 0; i < T.size(); ++ i) {
            if (s[T[i] - 'a'] == 0) {
                r += T[i];
            }
        }
        return r;
    }
};
