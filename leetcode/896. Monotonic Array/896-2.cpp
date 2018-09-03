// https://helloacm.com/how-to-check-if-an-array-is-monotonic/
// https://leetcode.com/problems/monotonic-array/

class Solution {
public:    
    bool isMonotonic(vector<int>& A) {
        auto sgn = [](int a, int b) { // local functions
            return a < b ? -1 : (a == b) ? 0 : 1;
        };
        int prev = 0;
        for (int i = 0; i < A.size() - 1; ++ i) {
            int c = sgn(A[i], A[i + 1]);
            if (c != 0) {
                if (c != prev && prev != 0) {
                    return false;
                }
                prev = c;
            }
        }
        return true;
    }
};
