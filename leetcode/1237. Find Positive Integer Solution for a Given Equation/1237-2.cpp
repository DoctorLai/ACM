// https://helloacm.com/how-to-find-positive-integer-solution-for-a-given-equation-using-bruteforce-two-pointer-or-binary-search-algorithms/
// https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
// EASY, BINARY SEARCH

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
        for (int i = 1; i <= 1000; ++ i) {
            int low = 1, high = 1000;
            while (low <= high) {
                int mid = (low + high) / 2; 
                int v = customfunction.f(i, mid);
                if (v == z) {
                    r.push_back({i, mid});
                    break;
                }
                if (v < z) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return r;
    }
};
