// https://helloacm.com/iterative-and-recursion-algorithms-to-compute-the-number-of-steps-to-reduce-a-number-to-zero/
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// EASY

class Solution {
public:
    int numberOfSteps (int num) {
        int r = 0;
        while (num != 0) {
            r ++;
            if (num % 2 == 0) {
                num >>= 1;
            } else {
                num --;
            }
        }
        return r;
    }
};
