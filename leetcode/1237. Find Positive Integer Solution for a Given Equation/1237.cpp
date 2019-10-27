// https://helloacm.com/how-to-find-positive-integer-solution-for-a-given-equation-using-bruteforce-two-pointer-or-binary-search-algorithms/
// https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
// EASY, TWO POINTER

/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> r;
        int low = 1, high = 1000;
        while ((low <= 1000) && (low >= 1) && (high <= 1000) && (high >= 1)) {
            int v = customfunction.f(low, high);
            if (v == z) {
                r.push_back({low, high});
                low ++;
                high --;
            } else if (v < z) {
                low ++;
            } else {
                high --;
            }
        }
        return r;
    }
};
