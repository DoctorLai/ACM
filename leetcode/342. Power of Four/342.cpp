// https://helloacm.com/how-to-check-if-integer-is-power-of-four-cc/
// https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num > 0) && ((num & (num - 1)) == 0) 
                && ((num - 1) % 3 == 0);
    }
};
