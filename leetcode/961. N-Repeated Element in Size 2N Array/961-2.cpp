// https://helloacm.com/how-to-find-n-repeated-element-in-size-2n-array/ 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int i, j;
        while (A[i = rand() % A.size()] != A[j = rand() % A.size()] || i == j);        
        return A[i];
    }
};