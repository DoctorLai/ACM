// https://helloacm.com/how-to-check-if-an-array-is-monotonic/
// https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonicIncreasing(vector<int>& A) {
        for (int i = 1; i < A.size(); ++ i) {
            if (A[i] < A[i - 1]) {
                return false;
            }
        }
        return true;
    }
 
    bool isMonotonicDecreasing(vector<int>& A) {
        for (int i = 1; i < A.size(); ++ i) {
            if (A[i] > A[i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    bool isMonotonic(vector<int>& A) {
        return isMonotonicIncreasing(A) || isMonotonicDecreasing(A);
    }
};
