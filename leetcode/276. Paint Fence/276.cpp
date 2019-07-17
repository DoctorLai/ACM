// https://helloacm.com/compute-the-number-of-ways-to-paint-the-house-via-dynamic-programming-algorithm/
// https://leetcode.com/problems/paint-fence/

class Solution {
public:
    int numWays(int n, int k) {
        vector<int> f(n + 1);
        f[0] = 0;
        if (n == 0) return f[0];
        f[1] = k;
        if (n == 1) return f[1];
        f[2] = k * k;
        if (n == 2) return f[2];
        for (int i = 3; i <= n; ++ i) {
            f[i] = f[i - 1] * (k - 1) + // different color 
                f[i - 2] * (k - 1); // same color
        }
        return f[n];
    }
};
