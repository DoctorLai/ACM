// https://helloacm.com/how-to-check-valid-perfect-square-without-sqrt-function/
// https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 1) return false;
        for (int i = 1; num > 0; i += 2) {
            num -= i;
        }
        return num == 0;
    }
};
