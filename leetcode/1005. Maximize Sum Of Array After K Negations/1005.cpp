// https://helloacm.com/maximize-sum-of-array-after-k-negations-using-greedy-algorithm-via-priority-queue-min-element/
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int, vector<int>, std::greater<int>> pq;
        for (const auto &n: A) {
            pq.push(n);
        }
        for (int i = 0; i < K; ++ i) {
            auto p = pq.top();
            pq.pop();
            pq.push(-p);
        }
        int s = 0;
        while (!pq.empty()) {
            auto p = pq.top();
            s += p;
            pq.pop();
        }
        return s;
    }
};
