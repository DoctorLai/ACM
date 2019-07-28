// https://helloacm.com/how-to-compute-the-n-th-tribonacci-number-using-iterative-dynamic-programming-algorithm/
// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
        int t[3] = {0, 1, 1};
        if (n <= 2) return t[n];
        for (int i = 3; i <= n; ++ i) {
            int a = t[0] + t[1] + t[2];
            t[0] = t[1];
            t[1] = t[2];
            t[2] = a;
        }
        return t[2];
    }
};
