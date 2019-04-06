// https://helloacm.com/how-to-determine-sum-of-two-square-numbers/
// https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (unsigned int a = 0; a * a < = c; ++ a) {
            unsigned int b = c - a * a;
            if (binarySearch(0, b, b)) {
                return true;
            }
        }
        return false;
    }    
    
    bool binarySearch(unsigned int left, unsigned int right, unsigned int n) {
        if (left > right) return false;
        int64_t mid = left + (right - left) / 2;
        if (mid * mid == n) return true;
        if (mid * mid > n) {
            return binarySearch(left, mid - 1, n);
        }
        return binarySearch(mid + 1, right, n);
    }
};
