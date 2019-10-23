// https://helloacm.com/greedy-algorithm-to-find-the-largest-perimeter-triangle-by-sorting/
// https://leetcode.com/problems/largest-perimeter-triangle/
// EASY, ARRAY, TRIANGLE, SORTING, GREEDY

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(begin(A), end(A));
        for (int i = A.size() - 3; i >= 0; -- i) {
            if (A[i] + A[i + 1] > A[i + 2]) {
                return A[i] + A[i + 1] + A[i + 2];
            }
        }
        return 0;
    }
};
