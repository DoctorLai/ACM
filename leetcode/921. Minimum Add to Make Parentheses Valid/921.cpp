// https://helloacm.com/algorithm-to-count-the-minimum-add-to-make-parentheses-valid/
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string S) {
        int left = 0;
        int ans = 0;
        for (const auto &n: S) {
            if (n == '(') {
                left ++;
            } else {
                if (left > 0) {
                    left --;
                } else {
                    ans ++;
                }
            }
        }
        return ans + left;
    }
};
