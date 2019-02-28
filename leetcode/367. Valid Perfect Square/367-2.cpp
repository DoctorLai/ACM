// https://helloacm.com/how-to-check-valid-perfect-square-without-sqrt-function/
// https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        if (num <= 1) return true;
        int i = 2;
        int j = num;
        while (i <= j) {
            int64_t  k = i + (j - i) / 2; // avoid integer overflow
            if (k * k == num) return true;
            if (k * k > num) {
                j = k - 1;
            } else {
                i = k + 1;
            }
        }
        return false;
    }
};


