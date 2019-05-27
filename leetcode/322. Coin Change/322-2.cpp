// https://helloacm.com/classic-knapsack-problem-variant-coin-change-via-dynamic-programming-and-breadth-first-search-algorithm/
// https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> f(amount + 1, INT_MAX);
        f[0] = 0;
        for (int i = 1; i <= amount; ++ i) {
            for (const auto &n: coins) {
                if (i >= n && (f[i - n] != INT_MAX)) {
                    f[i] = min(f[i], f[i - n] + 1);
                }
            }
        }
        return f[amount] == INT_MAX ? -1 : f[amount];
    }
};
