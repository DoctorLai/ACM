// https://helloacm.com/parity-sorting-the-array-by-index/
// https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> r(A.size());
        int even = 0, odd = 1;
        for (int i = 0; i < A.size(); ++ i) {
            if (A[i] % 2 == 0) {
                r[even] = A[i];
                even += 2;
            } else {
                r[odd] = A[i];
                odd += 2;
            }
        }
        return r;
    }
};
