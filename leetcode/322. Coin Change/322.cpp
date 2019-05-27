// https://helloacm.com/classic-knapsack-problem-variant-coin-change-via-dynamic-programming-and-breadth-first-search-algorithm/
// https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        queue<pair<int, int>> Q;
        if (amount == 0) return 0;
        Q.push({amount, 0});
        unordered_set<int> v;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            for (const auto &n: coins) {
                if (p.first > n && (v.count(p.first - n) == 0)) {
                    Q.push({p.first - n, p.second + 1});
                    v.insert(p.first - n);  // avoid memory limit
                } else if (p.first == n) {
                    return p.second + 1;
                }
            }
        }
        return -1;
    }
};
