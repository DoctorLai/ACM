// https://helloacm.com/parity-sorting-the-array-by-index/
// https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int indexes[2] = { -2, -1 };
        for (int i = 0; i < A.size(); ++i) {
            while (A[i] % 2 != i % 2) {
                int idx = (indexes[A[i] % 2] += 2);
                swap(A[i], A[idx]);
            }
        }
        return A;
    }
};
