// https://helloacm.com/how-to-delete-columns-to-make-sorted-table/
// https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int ans = 0;
        for (int i = 0; i < A[0].size(); i ++) {
            for (int j = 0; j < A.size() - 1; j ++) {
                if (A[j][i] > A[j + 1][i]) {
                    ans ++;
                    break;
                }
            }
        }
        return ans;
    }
};
