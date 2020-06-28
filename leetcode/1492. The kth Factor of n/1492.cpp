// https://helloacm.com/efficient-algorithms-to-compute-the-kth-factor-of-a-natural-number-n/
// https://leetcode.com/problems/the-kth-factor-of-n/
// MEDIUM

class Solution {
public:
    int kthFactor(int n, int k) {
        int d = 1;
        for (; d * d <= n; ++ d) {
            if (n % d == 0) {
                if (-- k == 0) {
                    return d;
                }
            }
        }
        for (d = d - 1; d >= 1; -- d) {
            if (d * d == n) continue;
            if (n % d == 0) {
                if (-- k == 0) {
                    return n / d;
                }
            }
        }
        return -1;
    }
};
