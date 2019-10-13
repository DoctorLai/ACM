// https://helloacm.com/how-to-split-a-string-in-balanced-strings/
// https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int bal = 0, ans = 0;
        for (const auto &n: s) {
            if (n == 'L') {
                bal ++;
            } else {
                bal --;
            }
            if (bal == 0) {
                ans ++;
            }
        }
        return ans;
    }
};
