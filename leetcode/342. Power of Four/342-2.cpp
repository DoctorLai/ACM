// https://helloacm.com/how-to-check-if-integer-is-power-of-four-cc/
// https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int num) {
        while (num >= 4) {
            if (num % 4 != 0) {
                return false;
            }
            num /= 4;
        }
        return num == 1;
    }
};
