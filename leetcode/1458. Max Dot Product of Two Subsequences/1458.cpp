// https://helloacm.com/dynamic-programming-algorithm-to-compute-the-max-dot-product-of-two-subsequences/
// https://leetcode.com/problems/max-dot-product-of-two-subsequences/
// HARD, DP

class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(); 
        if (!m || !n) return 0; 
        vector<vector<int>> dp(m, vector<int>(n, 0)); 
        for (int i = 0; i < m; i++) { 
            for (int j = 0; j < n; j++) { 
                dp[i][j] = nums1[i] * nums2[j]; 
                if (i-1 >= 0) dp[i][j] = max(dp[i-1][j], dp[i][j]); 
                if (j-1 >= 0) dp[i][j] = max(dp[i][j-1], dp[i][j]); 
                if (i-1 >= 0 && j-1>= 0) { 
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + nums1[i]*nums2[j]);
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1]); 
                }          
            }
        }
        return dp[m-1][n-1];         
    }
};
