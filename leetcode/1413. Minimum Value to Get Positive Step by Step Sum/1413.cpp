// https://helloacm.com/compute-the-minimum-value-to-get-positive-step-by-step-sum-using-prefix-sum-algorithm/
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
// PREFIX, EASY

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minsum = 0;
        std::accumulate(begin(nums), end(nums), 0, [&](auto &a, auto &b) {
            minsum = min(minsum, a + b);
            return a + b;
        });            
        return -minsum + 1;
    }
};
