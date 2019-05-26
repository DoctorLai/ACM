// https://helloacm.com/the-custom-sort-string-algorithm-with-count-and-write/
// https://leetcode.com/problems/custom-sort-string/

class Solution {
public:
    string customSortString(string S, string T) {
        int t[26] = { 0 };
        for (const auto n: T) {
            t[n - 'a'] ++;
        }
        string r = "";
        for (int i = 0; i < S.size(); ++ i) {
            for (int k = 0; k < t[S[i] - 'a']; ++ k) {
                r += S[i];
            }          
            t[S[i] - 'a'] = 0; // mark those used
        }
        for (char c = 'a'; c <= 'z'; ++ c) {
            for (int k = 0; k < t[c - 'a']; ++ k) {
                r += c;
            }
        }
        return r;
    }
};
