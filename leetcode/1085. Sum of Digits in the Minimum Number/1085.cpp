// https://helloacm.com/coding-exercise-sum-of-digits-in-the-minimum-number/
// https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/

class Solution {
public:
    int sumOfDigits(vector<int>& A) {
//        int v = *min_element(begin(A), end(A), [](auto a, auto b) { return a < b; });
        int v = *min_element(begin(A), end(A));
        int r = 0;
        while (v > 0) {
            r += v % 10;
            v /= 10;
        }
        return 1 - r % 2;
    }
};
