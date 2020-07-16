// https://helloacm.com/algorithms-to-compute-the-math-powera-n-in-logarithm-complexity/
// https://leetcode.com/problems/powx-n/
// MEDIUM, RECURSION

class Solution {
public:
    double myPow(double x, int64_t n) {
        if (n == 0) return 1;
        if (x == 1) return 1;
        if (n < 0) return 1.0 / myPow(x, -n);
        if (n % 2 == 0) {
            double a = myPow(x, n / 2);
            return a * a;
        } 
        return x * myPow(x, n - 1);
    }
};
