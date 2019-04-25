// https://helloacm.com/the-valid-mountain-array-algorithm/
// https://leetcode.com/problems/valid-mountain-array/

class Solution {
    public boolean validMountainArray(int[] A) {        
        int peak = 0, left = 0, right = 0;
        // optional: if (A.length < 3) return false;
        while ((peak < A.length - 1) && (A[peak] < A[peak + 1])) { 
            peak ++; 
            left ++; 
        };
        // optional: if ((peak == 0) || (peak == A.length - 1)) return false;
        while ((peak < A.length - 1) && (A[peak] > A[peak + 1])) { 
            peak ++; 
            right ++; 
        };        
        return (left * right > 0) && (peak == A.length - 1);
    }
}
