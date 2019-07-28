// https://helloacm.com/how-to-compute-the-n-th-tribonacci-number-using-iterative-dynamic-programming-algorithm/
// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
        vector<int> f(max(3, n + 1));
        f[0] = 0;
        f[1] = 1;
        f[2] = 1;
        if (n <= 2) return f[n];
        for (int i = 3; i <= n; ++ i) {
            f[i] = f[i - 1] + f[i - 2] + f[i - 3];
        }
        return f[n];
    }
};
