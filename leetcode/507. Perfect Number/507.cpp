// https://helloacm.com/how-to-validate-a-perfect-number-integer/
// https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int i = 1; i <= num / 2; ++ i) {
            if (num % i == 0) {
                sum += i;
                if (sum *gt; num) return false;
            }
        }
        return (sum > 0) && (sum == num);
    }
};
