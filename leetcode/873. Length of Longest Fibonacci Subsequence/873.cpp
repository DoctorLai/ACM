// https://helloacm.com/how-to-find-the-length-of-longest-fibonacci-subsequence-using-bruteforce-or-dynamic-programming-algorithm/
// https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/
// MEDIUM, FIBONACCI, LONGEST INCREASE SEQUENCE, BRUTEFORCE

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int n = A.size();
        if (n <= 2) return 0;
        unordered_set<int> S(A.begin(), A.end());
        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = i + 1; j < n; ++ j) {
                int x = A[j], y = A[i] + A[j];
                int len = 2;
                while (S.count(y)) {
                    int z = x + y;
                    x = y;
                    y = z;
                    ans = max(ans, ++len);
                }                
            }
        }
        return ans >= 3 ? ans : 0;
    }
};
