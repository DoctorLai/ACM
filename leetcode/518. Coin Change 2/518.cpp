// https://helloacm.com/classic-unlimited-knapsack-problem-variant-coin-change-via-dynamic-programming-and-depth-first-search-algorithm/
// https://leetcode.com/problems/coin-change-2/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> f(amount + 1, 0);
        f[0] = 1;
        for (const auto &c: coins) {
            for (int i = 1; i <= amount; ++ i) {
                if (i >= c) {
                    f[i] += f[i - c];
                }
            }
        }
        return f[amount];
    }
};
