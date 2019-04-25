// https://helloacm.com/the-valid-mountain-array-algorithm/
// https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int peak = 0, left = 0, right = 0;
        int size = A.size();
        // optional: if (A.length < 3) return false;
        while ((peak < size - 1) && (A[peak] < A[peak + 1])) { 
            peak ++; 
            left ++; 
        };
        // optional: if ((peak == 0) || (peak == A.length - 1)) return false;
        while ((peak < size - 1) && (A[peak] > A[peak + 1])) { 
            peak ++; 
            right ++; 
        };        
        return (left * right > 0) && (peak == size - 1);        
    }
};
