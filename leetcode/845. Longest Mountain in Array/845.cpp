// https://helloacm.com/left-and-right-counter-algorithm-to-find-the-longest-mountain-in-array/
// https://leetcode.com/problems/longest-mountain-in-array/
// MEDIUM, ARRAY

class Solution {
public:
    int longestMountain(vector<int>& A) {
        if (A.empty()) return 0;
        vector<int> left(A.size(), 0);
        vector<int> right(A.size(), 0);
        for (int i = 1; i < A.size(); ++ i) {
            if (A[i] > A[i - 1]) {
                left[i] = left[i - 1] + 1;
            } 
        }
        for (int i = A.size() - 2; i >= 0; -- i) {
            if (A[i] > A[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }
        int res = 0;
        for (int i = 0; i < A.size(); ++ i) {
            if (left[i] * right[i] > 0)
                res = max(res, left[i] + right[i] + 1);
        }
        return res;
    }
};
