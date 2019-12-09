// https://helloacm.com/subtract-the-product-and-sum-of-digits-of-an-integer/
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// EASY, MATH

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while (n > 0) {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
        return product - sum;
    }
};
