// https://helloacm.com/compute-the-maximum-score-after-splitting-a-string/
// https://leetcode.com/problems/maximum-score-after-splitting-a-string/
// EASY, PREFIX SUM

class Solution {
public:
    int maxScore(string s) {
        int sum = std::accumulate(begin(s), end(s), 0, [](auto &a, auto &b) {
            return a + (b == '1' ? 1 : 0);
        });
        if (sum == 0) return 1;
        if (sum == s.size()) return sum - 1;
        int res = 0, right = 0;
        for (int i = s.size() - 1; i > 0; -- i) {
            right += (s[i] == '1' ? 1 : 0);
            int score = (i - sum  + right) + right;
            res = max(res, score);
        }
        return res;
    }
};
