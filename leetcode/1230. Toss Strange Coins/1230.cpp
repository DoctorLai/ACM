// https://helloacm.com/facing-heads-probabilties-of-tossing-strange-coins-using-dynamic-programming-algorithm/
// https://leetcode.com/problems/toss-strange-coins/

class Solution {
public:
    double probabilityOfHeads(vector<double>& prob, int target) {
        if (prob.empty()) return 0;
        vector<vector<double>> dp(prob.size(), vector<double>(prob.size() + 1, 0));
        dp[0][1] = prob[0];
        dp[0][0] = 1 - prob[0];
        for (int i = 1; i < prob.size(); ++ i) {
            dp[i][0] = dp[i - 1][0] * (1 - prob[i]);
            for (int j = 1; j <= target; ++ j) {
                dp[i][j] = dp[i - 1][j] * (1 - prob[i]) + dp[i - 1][j - 1] * prob[i];
            }
        }
        return dp[prob.size() - 1][target];
    }
};
