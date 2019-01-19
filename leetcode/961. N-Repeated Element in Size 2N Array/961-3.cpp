// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for (int i = 0; i < A.size() - 1; ++ i) {
            if (A[i] == A[i + 1]) { // any two neighbour numbers 
                return A[i];
            }            
        }
        // could be evenly distributed excluding the above case
        for (int i = 0; i < A.size() - 2; ++ i) {
            if (A[i] == A[A.size() - 1] || A[i] == A[A.size() - 2]) {
                return A[i];
            }
        }
        return INT_MAX; // make compiler happy        
    }
};