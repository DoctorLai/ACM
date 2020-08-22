// https://helloacm.com/minimum-numbers-of-function-calls-to-make-target-array/
// https://leetcode.com/problems/minimum-numbers-of-function-calls-to-make-target-array/
// MEDIUM, MATH

class Solution {
public:
    int minOperations(vector<int> nums) {
        int add = 0, mul = 0;
        for (auto &n: nums) {
            int m = 0;
            while (n) {
                if (n % 2) {
                  ++ add;
                  -- n;
                } else {
                  ++ m;
                  n >>= 1;
                }
            }
            mul = max(mul, m);
        }
        return add + mul;
    }
};
