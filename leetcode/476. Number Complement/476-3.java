// https://helloacm.com/how-to-compute-the-number-complement-for-integers/
// https://leetcode.com/problems/number-complement/

class Solution {
    public int findComplement(int num) {
        int x = 1, r = num;
        while (r > 0) {
            r /= 2;
            x <<= 1;
        }
        return x - 1 - num;
    }
}
