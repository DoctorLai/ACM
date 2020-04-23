// https://helloacm.com/algorithms-to-compute-the-bitwise-and-of-numbers-in-a-range/
// https://leetcode.com/problems/bitwise-and-of-numbers-range/
// MEDIUM, BIT

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        while (m < n) {
            n = n & (n - 1);
        }
        return m & n;
    }
};
