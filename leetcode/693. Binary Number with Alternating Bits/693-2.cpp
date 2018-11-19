// https://helloacm.com/how-to-check-binary-number-with-alternating-bits/
// https://leetcode.com/problems/binary-number-with-alternating-bits/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n & 1;
        n >>= 1;
        while (n > 0) {
            int bit = n & 1;
            if (prev == bit) return false;
            n >>= 1;
            prev = bit;
        }
        return true;
    }
};
