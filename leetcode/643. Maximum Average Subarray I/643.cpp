// https://helloacm.com/how-to-compute-the-maximum-average-subarray/
// https://leetcode.com/problems/maximum-average-subarray-i/

#include <algorithm>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        double sum = 0;
        k = std::min(k, (int)nums.size());
        for (int i = 0; i < k; ++ i) {
            sum += nums[i];
        }
        double v = sum;
        for (int i = 1; i + k <= nums.size(); ++ i) {
            sum = sum - nums[i - 1] + nums[i + k - 1];
            v = std::max(v, sum);
        }
        return v / k;
    }
};
