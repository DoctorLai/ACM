// https://helloacm.com/parity-sorting-the-array-by-index/
// https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int indices[2] = { -2, -1 };
        vector<int> ret(A.size());
        for (int i = 0; i < A.size(); ++ i) {
            ret[indices[A[i] % 2] += 2] = A[i];
        }
        return ret;
    }
};
