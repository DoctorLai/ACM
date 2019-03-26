// https://helloacm.com/c-coding-exercise-smallest-range-of-array/
// https://leetcode.com/problems/smallest-range-i/

class Solution {
public:
    int smallestRangeI(vector<int> & A, int K) {
        int _max = std::accumulate(begin(A), end(A), A[0], [](auto &a, auto &b) { return max(a, b); });
        int _min = std::accumulate(begin(A), end(A), A[0], [](auto &a, auto &b) { return min(a, b); });
        return max(0, _max - K - (_min + K));
    }
};
