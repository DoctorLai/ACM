// https://helloacm.com/counting-substrings-with-only-one-distinct-letter-with-different-algorithms/
// https://leetcode.com/problems/count-substrings-with-only-one-distinct-letter/

class Solution {
public:
    int countLetters(string S) {
        int n = S.size();
        vector<int> f(n, 1);
        for (int i = 1; i < n; ++ i) {
            if (S[i] == S[i - 1]) {
                f[i] = f[i - 1] + 1;
            }
        }
        return std::accumulate(begin(f), end(f), 0, [](auto &a, auto &b) {
            return a + b;
        });
    }
};
