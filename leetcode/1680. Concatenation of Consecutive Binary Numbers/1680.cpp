// https://helloacm.com/algorithm-to-compute-the-concatenation-of-consecutive-binary-numbers/
// https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
// MEDIUM, MATH

class Solution {
public:
    int concatenatedBinary(int n) {
        constexpr int M = 1e9+7;
        int64_t ans = 0;
        for (int i = 1; i <= n; ++ i) {
            int curLen = 32 - __builtin_clz(i);
            ans = ((ans << curLen) + i) % M;
        }
        return ans;
    }
};
