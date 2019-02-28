// https://helloacm.com/how-to-check-valid-perfect-square-without-sqrt-function/
// https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 0; (int64_t)i * i <= num; ++i) {
            if (i * i == num) return true;
        }
        return false;
    }
};
