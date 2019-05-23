// https://helloacm.com/algorithms-to-count-the-number-of-palindromic-substrings/
// https://leetcode.com/problems/palindromic-substrings/

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>> f(n, vector<bool>(n, false));
        for (int i = 0; i < n; ++ i) {
            f[i][i] = true;    // any single character by definition is a palindrome.
        }
        int ans = n;
        for (int i = 0; i < n; ++ i) {
            for (int j = i - 1; j >= 0; -- j) {
                if (i - j == 1) {
                    f[i][j] = (s[i] == s[j]);
                } else {
                    f[i][j] = (s[i] == s[j]) && (f[i - 1][j + 1]);
                }
                if (f[i][j]) ans ++;
            }
        }
        return ans;
    }
};
