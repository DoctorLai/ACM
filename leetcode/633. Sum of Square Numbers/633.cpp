// https://helloacm.com/how-to-determine-sum-of-two-square-numbers/
// https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (unsigned int a = 0; a * a <= c; ++ a) {
            int b = (int)sqrt(c - a * a);
            if ((unsigned long)b * b + (unsigned long)a * a == c) {
                return true;
            }
        }
        return false;
    }    
};
