// https://helloacm.com/how-to-validate-a-perfect-number-integer/
// https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for (int i = 1; i * i <= num; ++ i) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }
        return (num > 0) && (sum - num == num);
    }
};
