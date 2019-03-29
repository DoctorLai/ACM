// https://helloacm.com/how-to-compute-the-number-complement-for-integers/
// https://leetcode.com/problems/number-complement/

class Solution {
    public int findComplement(int num) {
        int r = 0, x = 1;
        while (num > 0) {
            r += (1 - num % 2) * x;
            num /= 2;
            x *= 2;
        }
        return r;
    }
}
