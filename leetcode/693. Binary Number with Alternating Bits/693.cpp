// https://helloacm.com/how-to-check-binary-number-with-alternating-bits/
// https://leetcode.com/problems/binary-number-with-alternating-bits/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int m = n >> 1;
        return ((m + n) & (m + n + 1)) == 0;
    }
};
