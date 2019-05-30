// https://helloacm.com/algorithms-to-find-maximum-size-subarray-sum-that-equals-k/
// https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {        
        int n = nums.size(), r = 0;
        if (n == 0) return 0;
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        int total = 0;
        for (int i = 1; i < n; ++ i) {
            total += nums[i - 1];
            left[i] = total;
        }
        total += nums[n - 1];
        int total2 = 0;
        for (int j = n - 2; j >= 0; --j) {
            total2 += nums[j + 1];
            right[j] = total2;
        }        
        for (int i = 0; i < n; ++ i) {
            for (int j = i; j < n; ++ j) {
                // left and right range sum exclusive
                int sum = total - left[i] - right[j]; 
                if (sum == k) {
                    r = max(r, j - i + 1);
                }
            }
        }
        return r;
    }
};
