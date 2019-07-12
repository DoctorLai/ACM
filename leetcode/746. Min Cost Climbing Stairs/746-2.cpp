// https://helloacm.com/how-to-compute-the-min-cost-of-climbing-stairs-via-dynamic-programming-algorithm/
// https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        if (n == 1) return cost[0];
        for (int i = 2; i < n; ++ i) {
            cost[i] = min(cost[i - 1], cost[i - 2]) + cost[i];
        }
        return min(cost[n - 2], cost[n - 1]);
    }
};
