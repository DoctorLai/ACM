// https://helloacm.com/two-pointer-algorithm-to-find-maximum-two-sum-less-than-k/
// https://leetcode.com/problems/two-sum-less-than-k/

class Solution {
public:
    int twoSumLessThanK(vector<int>& A, int K) {
        sort(begin(A), end(A));
        int i = 0;
        int j = A.size() - 1;
        int ans = -1;
        while (i < j) {
            if (A[i] + A[j] >= K) {
                j --;
            } else {
                ans = max(ans, A[i] + A[j]);
                i ++;
            }
        }
        return ans;
    }
};
