// https://helloacm.com/how-to-find-the-largest-unique-number-in-array/
// https://leetcode.com/problems/largest-unique-number/

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        // push dummy values at front and end
        // to avoid boundary checks
        A.push_back(INT_MAX);
        A.push_back(INT_MIN);
        sort(begin(A), end(A));
        for (int i = A.size() - 2; i > 0; -- i) {
            if (A[i] == A[i - 1]) continue;
            if (A[i] == A[i + 1]) continue;
            return A[i];
        }
        return -1;
    }
};
