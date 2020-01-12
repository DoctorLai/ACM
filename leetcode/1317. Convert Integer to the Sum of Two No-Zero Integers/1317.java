// https://helloacm.com/how-to-convert-integer-to-the-sum-of-two-no-zero-integers/
// https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
// EASY, BRUTEFORCE

class Solution {
    public int[] getNoZeroIntegers(int n) {
        for (int i = 1; i < n; ++ i) {
            int a = i;
            int b = n - a;
            if (nozeros(a) && nozeros(b)) {
                return new int[]{a, b};
            }
        }
        return null;
    }
    
    private boolean nozeros(int x) {
        while (x > 0) {
            if (x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }
}
