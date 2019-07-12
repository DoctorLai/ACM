// https://helloacm.com/how-to-compute-the-min-cost-of-climbing-stairs-via-dynamic-programming-algorithm/
// https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f2 = 0, f1 = 0;
        for (const auto &n: cost) {
            int cur = n + min(f2, f1);
            f2 = f1;
            f1 = cur;
        }
        return min(f1, f2) ;
    }
};
