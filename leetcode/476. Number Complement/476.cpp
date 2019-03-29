// https://helloacm.com/how-to-compute-the-number-complement-for-integers/
// https://leetcode.com/problems/number-complement/

class Solution {
public:
    int findComplement(int num) {
        int r = __builtin_clz(num);
        return (unsigned int)(2 << (32 - r - 1)) - 1 - num;
    }
};
