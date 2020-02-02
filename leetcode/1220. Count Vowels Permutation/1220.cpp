// https://helloacm.com/dynamic-programming-algorithm-to-count-vowels-permutation/
// https://leetcode.com/problems/count-vowels-permutation/

class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<int64_t>> dp(n + 1, vector<int64_t>(5, 0));
        for (int i = 0; i < 5; ++ i) {
            dp[1][i] = 1;
        }
        const int MOD = 1000000007;
        for (int i = 2; i <= n; ++ i) {
            dp[i][0] = (dp[i - 1][1] + // ea
                       dp[i - 1][2] + // ia                                   
                       dp[i - 1][4]) % MOD;  // ua
            dp[i][1] = (dp[i - 1][0] + // ae                                   
                       dp[i - 1][2]) % MOD;  // ie
            dp[i][2] = (dp[i - 1][1] + // ei
                       dp[i - 1][3]) % MOD;  // oi
            dp[i][3] = dp[i - 1][2];  // io                                  
            dp[i][4] = (dp[i - 1][2] + // iu
                       dp[i - 1][3]) % MOD;  // ou                                               
        }
        return (dp.back()[0] + 
            dp.back()[1] +
            dp.back()[2] +
            dp.back()[3] +
            dp.back()[4]) % MOD;          
    }
};
