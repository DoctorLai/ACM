// https://helloacm.com/maximize-sum-of-array-after-k-negations-using-greedy-algorithm-via-priority-queue-min-element/
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
// EASY, PRIORITY QUEUE, ARRAY

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        for (int i = 0; i < K; ++ i) {
            int m = min_element(begin(A), end(A)) - begin(A);
            A[m] *= -1;
        }
        return std::accumulate(begin(A), end(A), 0, 
                [](auto &a, auto &b) { return a + b; });
    }
};
