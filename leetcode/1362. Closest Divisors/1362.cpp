// https://helloacm.com/finding-the-closest-divisors/
// https://leetcode.com/problems/closest-divisors/
// MEDIUM, MATH

class Solution {
public:
    vector<int> closestDivisors(int x) {
        for (int a = sqrt(x + 2); a > 0; --a) {
            if ((x + 1) % a == 0)
                return {a, (x + 1) / a};
            if ((x + 2) % a == 0)
                return {a, (x + 2) / a};
        }
        return {};
    }
};
